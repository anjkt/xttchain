#include <iostream>

#include<cstring>
using namespace std;
char a[102];
void bsort (int b, int n)
  {
  char temp;
  for(int i=b; i<n; i++)
	{
	for(int j=b; j<n-1; j++)
		{
		if(a[j+1]<a[j])
			{
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
			}
		}

	}



  }

int main()
{
    int t,l=0,pos;


    cin>>t;
    for(int j=0;j<t;j++)
    {
        int i,flag1=0;
        memset(a, 0, 102);
        cin>>a;
         l= strlen(a) ;
        pos=l-1;
        for(i=0;i<l-1;i++)
            if(a[i+1]>a[i])
          { flag1=1;
            break;
          }
        if(flag1!=1)
            {
            cout<<"no answer";
            continue;
            }
            int flag=0;
            while(flag!=1)
            {

                for( i=pos;i>=0;i--)
                {
                    if(a[pos]>a[i])
                    {
                    swap(a[pos],a[i]);
                    flag=1;break;
                    }

                }
                if(i==-1)
                    pos-=1;

            }

            bsort(pos+1,l);

        cout<<a<<endl;

        }
    return 0;
}
