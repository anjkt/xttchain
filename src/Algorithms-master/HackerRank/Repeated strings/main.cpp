#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    long long int n,cnta=0,cnt=0;

    char a[100];
    cin>>a>>n;
    int l= strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a')
            cnta++;

        if(i==n-1)
        {
            cout<<cnta;
            return 0;
        }
    }

    cnta*=n/l;

    for(int i=0;i<n%l;i++)
    {
          if(a[i]=='a')
            cnta++;
    }

    cout<<cnta;
    return 0;
}
