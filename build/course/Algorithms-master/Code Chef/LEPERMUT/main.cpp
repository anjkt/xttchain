//
//  main.cpp
//  LEPERMUT
//
//  Created by Naman Kumar on 18/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int t,n,inc,linc,i,j;
    cin>>t;
    assert(t>=1&&t<=474);
    while(t--)
    {
        cin>>n;
        int a[n];
        inc=0;
        linc=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0&&a[i]<a[i-1])
                linc++;
            for(j=0;j<i;j++)
                if(a[i]<a[j])
                    inc++;
        }
        if(inc==linc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
