//
//  main.cpp
//  NDIFFPAL
//
//  Created by Naman Kumar on 18/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char str[n];
        str[n]='\0';
        for(i=0,j=97;i<n;i++)
        {
            str[i]=char(j);
            if(j==99)
                j=97;
            else
                j++;
        }
        puts(str);
    }
    return 0;
}
