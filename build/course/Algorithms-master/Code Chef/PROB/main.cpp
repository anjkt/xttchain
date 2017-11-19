//
//  main.cpp
//  PROB
//
//  Created by Naman Kumar on 18/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <cassert>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        assert(a>=1&&a<=1000000000);
        assert(b>=1&&a<=1000000000);
        assert(c>=1&&a<=1000000000);
        assert(d>=0&&d<a+b);
        cout<<(long double)a/(a+b)<<endl;
    }
    return 0;
}
