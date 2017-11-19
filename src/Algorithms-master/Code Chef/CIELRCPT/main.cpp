//
//  main.cpp
//  CIELRCPT
//
//  Created by Naman Kumar on 16/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;
int main()
{
    int t,k,sum=0;
    float n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
    start: k=0;
        while(n-pow(2,k)>=0)
        {
            if(k>11)
                break;
            k++;
        }
        k--;
        sum++;
        n-=pow(2,k);
        if(n>0)
        goto start;
        cout<<sum<<endl;
    }
    return 0;
}
