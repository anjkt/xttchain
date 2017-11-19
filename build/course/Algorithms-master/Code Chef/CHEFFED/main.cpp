#include<iostream>
using namespace std;
long long int s(long long int a)
{
    long long int sum=0;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    long long int n,i,count=0;
    cin>>n;
    for(i=n-97;i<n;i++)
        if(i+s(i)+s(s(i))==n)
            count++;
    cout<<count<<endl;
    return 0; 
}
