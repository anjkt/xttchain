#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long int n,k,t,coun=0,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        //cin>>t;
        scanf("%ld",&t);
        if(t%k==0)
            coun++;

    }
        cout<<coun;
    return 0;
}
