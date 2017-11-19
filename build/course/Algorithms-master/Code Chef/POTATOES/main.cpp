#include<iostream>
using namespace std;

int isprime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int t,x,y,z,i,f;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        f=0;
        for(i=1;!f;i++)
            f=isprime(x+y+i);
        cout<<--i<<endl;
    }
    return 0;
}