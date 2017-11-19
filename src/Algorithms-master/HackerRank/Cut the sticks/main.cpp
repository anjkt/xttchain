#include <iostream>

using namespace std;

int main()
{
    int n,temp,pos,ele,i;
    cin>>n;
    int *a =new int[n];
    for( i=0;i<n;i++)
        cin>>a[i];

    for( i=0;i<n;i++)
    {
         for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

    cout<<endl<<"sorted array";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    pos=0;
    while(pos<n)
    {
        ele=a[pos];
        cout<<n-pos<<endl;
        for(i=pos;i<n;i++)
            a[i]-=ele;
        for(i=n-1;i>pos;i--)
            if(a[i]==0)
            {
                pos=i;
                break;
            }
        pos++;


    }


    return 0;
}
