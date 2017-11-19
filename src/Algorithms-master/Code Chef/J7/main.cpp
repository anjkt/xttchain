//
//  main.cpp
//  J7
//
//  Created by Naman Kumar on 18/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#define ld long double
using namespace std;
int main()
{
    ld t,p,s,l,w,h;
    cin>>t;
    while(t--)
    {
        cin>>p>>s;
        l=(p-sqrt((p*p)-(24*s)))/12;
        w=l;
        h=(p/4)-2*l;
        cout<<setprecision(2)<<fixed<<l*w*h<<endl;

    }
      return 0;
}
