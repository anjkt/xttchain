#include<iostream>
using namespace std;

int main()
{
    int t,n,m,k,i,j,flag;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[m][2],select[m];
        for(i=0;i<m;i++)
        {
            select[i]=0;
            cin>>a[i][0]>>a[i][1];
        }
        select[m-1]=1;
        for(i=m-1;i>=0;i--)
        {
            flag=1;            
            for(j=m-1;j>=0;j--)
            {
                if(select[j]==1)
                {
                    if(a[i][0]==a[j][0]||a[i][0]==a[j][1]||a[i][1]==a[j][0]||a[i][1]==a[j][1])
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
                select[i]=1;
        }
        for(i=0;i<m;i++)
            if(select[i]==1)
                cout<<i<<" ";
            cout<<endl;
    }
}