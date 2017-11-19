#include <iostream>
#include<math.h>
using namespace std;

long int powe(long int a,long int b)
{
    b=b-1;
    while(b--)
    {
        a*=5;
    }
    return a;
}
int main()
{
   long int div=5,n,i,t,x,power=1,cnt=0;
   cin>>t;
   long int * ans;
   //int cnt=0;
   ans=new long int [t];
   for(i=0;i<t;i++)
   {
    cin>>n;

    cnt=0;div=5;power=1;
       while(div<=n)
       {
           cnt=cnt+ (int)n/div;
           x=(int)n/div;
            power++;
            div=powe(5,power);

       }
   ans[i]=cnt;
   }
   for(i=0;i<t;i++)
    cout<<ans[i]<<endl;
   delete [] ans;
    return 0;
}
