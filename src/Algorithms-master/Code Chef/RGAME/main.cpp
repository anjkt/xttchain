//
//  main.cpp
//  RGAME
//
//  Created by Naman Kumar on 25/12/16.
//  Copyright Â© 2016 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <math.h>
#define lli unsigned long long int
using namespace std;
lli power(lli n)
{
    lli pow=1,p=1000000007;
    for(int i=0;i<n;i++)
    {
        pow=((pow%p)*2)%p;
    }
    return pow;
}
int main()
{
    lli t,n,k,l,i,j;
    cin>>t;
    lli sum,p=1000000007;
    for(k=0;k<t;k++)
    {
        cin>>n;
        n++;
        lli a[n];
        for(l=0;l<n;l++)
        {
            cin>>a[l];
            a[l]=a[l]%p;
        }
        sum=( ((a[0]*a[1])%p)*power(n-1) )%p;
        if(n>2)
        {
            sum=( sum + ((((a[0]*a[n-1])%p)*2)%p) ) %p;
            for(i=0;i<n;i++)
            {
                if(i==0)
                    for(j=2;j<n-1;j++)
                        sum=( sum + ((((a[i]*a[j])%p)*power(n+i-j))%p) )%p;
                else
                    for(j=i+1;j<n;j++)
                        sum=( sum + ((((a[i]*a[j])%p)*power(n-1+i-j))%p) )%p;
            }
        }
        cout<<fixed<<sum<<endl;
    }
    return 0;
}