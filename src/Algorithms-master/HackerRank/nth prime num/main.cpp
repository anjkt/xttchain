#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int ele,cnt=0,flag=0,t,n,i,j;

    cin>>t;

    int *arr=new int[t];
    for(i=0;i<t;i++)
    cin>>arr[i];

    for(int k=0;k<t;k++)
    {

    for(int i=2;cnt<arr[k];i++)
    {
        ele=sqrt(i);
        for(int j=2;j<=ele;j++)
            if(i%j==0)
        {
            flag=1;
            break;
        }
    if(flag==0)
           //cout<<cnt<<"  "<<i<<"\n";
            cnt++;


    flag=0;
    }
    cout<<--i<<endl;

    }

}
