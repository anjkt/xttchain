#include <iostream>

using namespace std;

int main()
{
  long int cnt=0,n,i,t;
  int k;
  cin>>n>>k;
  long int * a=new long int[n];
  long int * rem=new long int [k];
  for(i=0;i<k;i++)
  {
      rem[i]=0;
  }

  for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        t=a[i]%k;
        rem[t]++;
    }
    if(k%2==0)
    {
        for(i=1;i<k/2;i++)
        {
        rem[i]>rem[k-i])?(cnt+=rem[i]):(cnt+=rem[k-i]);
        }
        if(rem[k/2]>0)
            cnt++;
        if(rem[0]>0)
            cnt++;
    }
     else
    {
        for(i=1;i<=k/2;i++)
        {
        (rem[i]>rem[k-i])?(cnt+=rem[i]):(cnt+=rem[k-i]);
        }

        if(rem[0]>0)
            cnt++;
    }

    cout<<cnt;
}
