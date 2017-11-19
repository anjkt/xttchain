//
//  main.cpp
//  ANKTRAIN
//
//  Created by Naman Kumar on 27/12/16.
//  Copyright © 2016 Naman Kumar. All rights reserved.
//

#include <iostream>
#define lli long long int
using namespace std;
int main()
{
    lli t, n, i;
    cin>>t;
    if(t>0&&t<501){
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n<1||n>500)
            break;
        switch(n%8)
        {
        case 1:
            cout<<n+3<<"LB";
            break;
        case 2:
            cout<<n+3<<"MB";
            break;
        case 3:
            cout<<n+3<<"UB";
            break;
        case 4:
            cout<<n-3<<"LB";
            break;
        case 5:
            cout<<n-3<<"MB";
            break;
        case 6:
            cout<<n-3<<"UB";
            break;
        case 7:
            cout<<n+1<<"SU";
            break;
        case 0:
            cout<<n-1<<"SL";
            break;
        }
        cout<<endl;
    }}
    return 0;
}
