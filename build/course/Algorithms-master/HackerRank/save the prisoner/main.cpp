#include <iostream>

using namespace std;

int main()
{
    int t,n,m,s;
    cin>>t;
    int * a=new int[t];
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        if(m<=n-s+1)
            cout<<s+n-1;
        else
        {
            m-=n-s+1;
            a[i]=n%m;
        }
    }

    for(int i=0;i<t;i++)
        cout<<a[i];

        delete [] a;
    return 0;
}
