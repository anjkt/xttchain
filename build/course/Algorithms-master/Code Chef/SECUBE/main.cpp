//
//  main.cpp
//  SECUBE
//
//  Created by Naman Kumar on 17/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
using namespace std;

int poss[101][1000001];

int main()
{
    int t,n,c;
    //precomputation
    for(long long i=1;i<101;i++)
        for(long long j=0;j<=1000000;j++)
            poss[i][(j*j*j)%(i*i*i)]=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        if(c==0)
            cout<<"YES"<<endl;
        else
        {
            c=(n*n*n)-c;
            if(poss[n][c])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
