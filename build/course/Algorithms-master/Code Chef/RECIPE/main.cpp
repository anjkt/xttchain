//
//  main.cpp
//  RECIPE
//
//  Created by Naman Kumar on 16/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int t,n,l=INT_MAX,i,j,f=1,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        l=INT_MAX;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(l>a[j])
                l=a[j];
        }
        for(j=l;j>0;j--)
        {
            for(k=0;k<n;k++)
            {
                if(a[k]%j!=0)
                    f=0;
            }
            if(f)
            {
                for(k=0;k<n;k++)
                    cout<<a[k]/j<<" ";
                break;
            }
            f=1;
        }
        cout<<endl;
    }
    return 0;
}
