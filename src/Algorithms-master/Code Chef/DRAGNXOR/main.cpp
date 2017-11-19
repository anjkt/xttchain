//
//  main.cpp
//  DRAGNXOR
//
//  Created by Naman Kumar on 19/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;

int main()
{
    lli t,n,a,b,i,j,q,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        lli x[n],y[n];
        i=n-1;
        q=0;
        w=0;
        while(i>=0)
        {
            x[i]=a%2;
            a/=2;
            if(x[i]==1)
                q++;
            y[i]=b%2;
            b/=2;
            if(y[i]==1)
                w++;
            i--;
        }
        if(q+w<=n)
        {
            lli sum=0;
            for(j=0;j<q+w;j++)
                sum+=pow(2,n-j-1);
            cout<<sum<<endl;
        }
        else
        {
            lli sum=0,f=0,init=0,k;
            if(q<w)
            {
                lli t=q;
                q=w;
                w=t;
            }
            for(j=0;j<n;j++)
            {
                if(j<q)
                    x[j]=1;
                else
                    x[j]=0;
                if(j>n-w-1)
                    y[j]=1;
                else
                    y[j]=0;
                if(x[j]==y[j]&&y[j]==1&&!f)
                {
                    f=1;
                    init=j;
                }
            }
            for(k=n-1;k>init-1;k--)
            {
                if(n-1-k<q-init)
                    x[k]=1;
                else
                    x[k]=0;
            }
            for(j=0;j<n;j++)
                if(x[j]!=y[j])
                    sum+=pow(2,n-j-1);
            cout<<sum<<endl;
        }
    }
    return 0;
}
