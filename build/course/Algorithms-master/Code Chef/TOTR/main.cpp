//
//  main.cpp
//  TOTR
//
//  Created by Naman Kumar on 18/01/17.
//  Copyright © 2017 Naman Kumar. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int t;
    char lang[27],str[100];
    cin>>t;
    gets(lang);
    while(t--)
    {
        gets(str);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='_')
                str[i]=' ';
            else if(!isalpha(str[i]))
                continue;
            else if(isupper(str[i]))
                str[i]=toupper(lang[(int)str[i]-64]);
            else
                str[i]=lang[(int)str[i]-96];
        }
        puts(str);
    }
    return 0;
}
