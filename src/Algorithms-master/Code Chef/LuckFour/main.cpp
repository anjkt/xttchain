#include <iostream>

using namespace std;

long long unsigned int count(long long unsigned int n);

int main() {
    long long unsigned int t,n;
    cin>>t;
    long long unsigned int a[t];
    for(long long unsigned int  i=0;i<t;i++)
    {
        cin>>n;
        a[i]=count(n);
    }
    for(long long unsigned int i=0;i<t;i++)
        cout<<a[i]<<endl;
    return 0;
}

long long unsigned int  count(long long unsigned int  n)
{
    long long unsigned int c=0;
    while(n!=0)
    {
       if((n%10)==4)
           c++;
        n/=10;
    }
    return c;
}
