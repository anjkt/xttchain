#include <iostream>

using namespace std;
int PrintNumber(int n)
{
    int ones=n%10,tens=n/10,flag=0;
    if(n==10)
    {
        cout<<"ten ";
        return 0;
    }
    else if(n==20)
    {
        cout<<"twenty";
        return 0;
    }

    if(tens==0)
        flag=1;
    else if(tens==2)
    {
        cout<<"twenty ";
        flag=1;
    }
    if(flag==1)
    switch(ones)
    {
        case 1: cout<<"one";break;
        case 2:cout<<"two";break;
        case 3:cout<<"three";break;
        case 4:cout<<"four";break;
        case 5:cout<<"five";break;
        case 6:cout<<"six";break;
        case 7:cout<<"seven";break;
        case 8:cout<<"eight";break;
        case 9:cout<<"nine";break;
    }
    else if(flag==0)
        switch(ones)
            {
        case 1: cout<<"eleven";break;
        case 2:cout<<"twelve";break;
        case 3:cout<<"thirteen";break;
        case 4:cout<<"fourteen";break;
        case 5:cout<<"fifteen";break;
        case 6:cout<<"sixteen";break;
        case 7:cout<<"seventeen";break;
        case 8:cout<<"eighteen";break;
        case 9:cout<<"ninteen";break;
            }

return 0;

}
int main()
{
    int h,m;
    cin>>h>>m;
    if(m==0)
    {
        PrintNumber(h);
        cout<<" o' clock";
    }

    else if(m==15)
    {
        cout<<"quarter past ";
        PrintNumber(h);
    }
    else if(m==30)
    {
        cout<<"half past ";
        PrintNumber(h);
    }
    else if(m==45)
    {
        cout<<"quarter to ";
        PrintNumber(h+1);
    }
    else if(m<30)
    {
        PrintNumber(m);
        if(m==1)
        cout<<" minute past ";
        else
            cout<<" minutes past ";
        PrintNumber(h);
    }
   else if(m>30)
    {
        PrintNumber(60-m);
        cout<<" minutes to ";
        PrintNumber(h+1);
    }
    return 0;
}
