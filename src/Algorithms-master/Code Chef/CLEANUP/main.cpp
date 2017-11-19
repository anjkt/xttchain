#include<iostream>
#include<cassert>
using namespace std;
int main()
{
    int t,i,n,m,j;
    cin>>t;
    assert(t<=50);
    while(t--)
    {
        cin>>n>>m;
        assert(m<=n&&n<=1000)
        int jobdone[n],jobrem[n-m];
        for(i=0;i<m;i++)
        {
            cin>>j;
            jobdone[j-1]=1;
        }
        j=0;
        i=0;
        while(i!=n-m)
        {
            if(jobdone[j]!=1)
            {
                jobrem[i]=j+1;
                i++;
            }
            j++;
        }
        for(i=0;i<n-m;i+=2)
            cout<<jobrem[i]<<" ";
        cout<<endl;
        for(i=1;i<n-m;i+=2)
            cout<<jobrem[i]<<" ";
        cout<<endl;
    }
    return 0;
}