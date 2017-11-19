//
//  main.cpp
//  SEBIHWY
//
//  Created by Naman Kumar on 24/12/16.
//  Copyright © 2016 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,n;
    float s,sg,fg,d,t,speed;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>sg>>fg>>d>>t;
        speed=s+(180*d/t);
        if(fabs(sg-speed)<fabs(fg-speed))
            cout<<"SEBI"<<endl;
        else if(fabs(sg-speed)>fabs(fg-speed))
            cout<<"FATHER"<<endl;
        else
            cout<<"DRAW"<<endl;
    }
    return 0;
}