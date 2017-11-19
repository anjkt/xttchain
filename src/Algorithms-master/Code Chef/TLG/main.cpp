//
//  main.cpp
//  TLG
//
//  Created by Naman Kumar on 16/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0,l=0,m=0,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        sum1+=x;
        sum2+=y;
        if((l<(sum1-sum2))&&(sum1>sum2))
        {
            l=sum1-sum2;
            m=1;
        }
        else if(l<(sum2-sum1))
        {
            l=sum2-sum1;
            m=2;
        }
    }
    cout<<m<<" "<<l;
    return 0;
}
