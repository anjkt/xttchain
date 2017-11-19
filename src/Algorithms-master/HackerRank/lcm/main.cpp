#include <iostream>

using namespace std;
    int lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
	if(m < n)
	{
	m=m+a;
	}
	else
	{
	    n=n+b;
	    }
    }
    return m;
}
int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int *arr=new int [n],sum=0;
        int *arr1=new int [n+1];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int temp;

            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";

        arr1[0]=arr[0];


        for(int i=1;i<n;i++)
        {
            temp=lcm(arr[i-1],arr[i]);
            arr1[i]=temp;
        }        arr1[n]=arr[n-1];

cout<<endl;
        for(int i=0;i<=n;i++)
            cout<<arr1[i]<<" ";

delete [] arr;
delete [] arr1;
    }


}
