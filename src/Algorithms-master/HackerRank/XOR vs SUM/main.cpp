#include <iostream>

using namespace std;

int main()
{
   long long int n,x=0;
    cin>>n;
        for(int i=0;i<=n;i++)
        if((n+i)==(n^i))
        x++;
    cout<<x;
}
