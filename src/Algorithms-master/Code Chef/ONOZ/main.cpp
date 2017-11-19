#include<iostream>
using namespace std;

int main()
{
    int t,h,m,count;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        count=1;
        for(int i=1;i<10;i++)
            for(int j=i;j<h;j+=j*10)
                for(int k=i;k<m;k+=k*10)
                    count++;
        cout<<count<<endl;
    }
    return 0;
}