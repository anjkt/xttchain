#include <iostream>
#include<math.h>
using namespace std;
int pno(int n)
{
int cnt=0,i,j=0,ele,found=0;
n--;
//if(n==1)
  //  return 2;
//if(n==2)
    //return 3;
//if(n==3)
    //return 5;
//n-=2;

for(i=2;cnt<=n;i++)
{
//ele=sqrt(i);


found =0;
ele = sqrt(i);
for(int j=2;j<=ele;j++)
{
    if(i%j==0)
    {
        found =1;
        break;
    }
}
if(found==0)
    cnt++;

}
return --i;

}
int main()
{
    int n,q,i,j,k=0,x=0,cnt,l=0;
    cin>>n>>q;
    int *arr=new int[n];
    int *temp=new int[n];
    int *b=new int [n], *temparr= new int [n];
    for(i=0;i<n;i++)
        cin>>arr[i];
     for(j=0;j<q;j++)
   {
      int jpno=pno(j+1);
       x=0;


       for(i=n;i>0;i--)
        {
           if(arr[i]%jpno==0)
           {
               temparr[l++]=arr[i];
               cnt++;
           }
           else
                temp[x++]=arr[i];

        }
        for(i=l-1;i>=0;i--)
            b[k++]=temparr[i];

      for(i=x-1;i>=0;i--)
      {
          arr[x--]=temp[i];
      }
       n=x-1;



   }
   for(i=0;i<k;i++)
    cout<<b[i]<<endl;


   for(i=x;i>0;i--)
    cout<<arr[i]<<endl;
}
