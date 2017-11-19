#include<iostream>
using namespace std;

int i,num[200];
void mult(int ele)
{
    int carry=0;
    int temp;

    for( i=199;num[i]!=-1;i--)
    {
        temp=num[i]*ele;
        num[i]=(temp+carry)%10;
        carry=(temp+carry)/10;
    }
    if(carry>9)
    {
        num[i]=carry%10;
        carry/=10;
        num[--i]=carry;
    }
    else if(carry!=0)
        num[i]=carry;
}
main()
{
    int t,arr[100];

   cin>>t;
   for(int j=0;j<t;j++)
        cin>>arr[j];

   for(int j=0;j<t;j++)
   {

    for(int k=0;k<200;k++)
        num[k]=-1;

    num[199]=1;

       for(int k=2;k<=arr[j];k++)
            mult(k);


        for(;i<200;i++)
          if(num[i]!=-1)
          cout<<num[i];

        cout<<endl;


   }
}
