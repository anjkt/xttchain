#include <iostream>

using namespace std;

int main()
{

    int n,cnt=0;
    int *a=new int[n];

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,pos=0;

    while(1)
    {
        if(i=n-1)                   cbayx cbxay cbxya cbyax
            break;
        if(a[i+2]==0)
         {
            i+=2;
            cnt++;
         }
         else
        {
            i+=1;
            cnt++;
         }
    }
    cout<<cnt;
    delete [] a;
}
