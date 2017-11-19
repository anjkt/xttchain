#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n],cnt=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }



        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;

        int temp=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            temp++;
        else
        {
            cnt+=temp/2;
            temp=1;
        }
    }
    cout<<cnt;

    delete [] a;
    return 0;
}
