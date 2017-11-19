//
//  main.cpp
//  ALEXTASK
//
//  Created by Naman Kumar on 24/12/16.
//  Copyright © 2016 Naman Kumar. All rights reserved.
//

#include <iostream>
using namespace std;

long long int same(long long int ,long long int );
int main() {
    
    int t, n, j, i, k;
    long long int small;
    cin>>t;
    long long int ans[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        long long int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        small=same(a[0],a[1]);
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(small>same(a[j],a[k]))
                    small=same(a[j],a[k]);
            }
        }
        ans[i]=small;
    }
    
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}

long long int same(long long int a,long long int b)
{
    long long int x=a,y=b;
    while(1)
    {
        if (a == 0)
            return x*y/b;
        b %= a;
        if (b == 0)
            return x*y/a;
        a %= b;
    }
}