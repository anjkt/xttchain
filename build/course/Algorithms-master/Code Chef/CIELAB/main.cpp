#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    if(a>b)
        a=a-b;
    else
        a=b-a;
    b=a;
    i=0;
    while(b!=0)
    {
        if(b%10<9)
        {
            a+=pow(10,i);
            break;
        }
        else if(b%10>0)
        {
            a-=pow(10,i);
            break;
        }
        b/=10;
        i++;
    }
    cout<<a<<endl;
    return 0;
}