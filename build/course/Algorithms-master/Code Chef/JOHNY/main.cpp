#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j;
    long long int k,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        k--;
        k=a[k];
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(a[i]>a[j])
                { 
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        for(i=0;i<n;i++)
            if(a[i]==k)
            {
                cout<<++i<<endl;
                break;
            }
    }
    return 0;
}