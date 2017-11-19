#include<iostream>
using namespace std;

int main()
{
    long long int t,n,a,b,i,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],c[n];
        for(i=0;i<n;i++)
        {   
            cin>>a[i];
            if(i>0&&a[i-1]!=a[i])
            {
                c[i-1]=1;
                c[i]=1;
            }
            else
                c[i]=0;
        }
        count=0;
        for(i=0;i<n;i++)
            count+=c[i];
        cout<<count<<endl;
    }
    return 0;
}