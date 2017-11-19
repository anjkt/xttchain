#include <iostream>

using namespace std;

int main()
{
    int n,a,b,pos=0;
    cin>>n;
    int *res=new int[n], *win=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        res[i]= a-b;
        if(res[i]>0)
            win[i]=1;
        else
            {
                win[i]=2;
                res[i]*=-1;
            }

    }
    //cout<<"23";
    int largest=res[0];
    for(int i=1;i<n;i++)
    {
        if(res[i]>largest)
        {
            largest=res[i];
            pos=i;
        }
    }
cout<<win[pos]<<" "<<largest;


    delete [] res;
    delete [] win;
}
