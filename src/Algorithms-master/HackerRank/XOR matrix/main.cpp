#include <iostream>

using namespace std;

int main()
{
    long long int n,m,i,j,flag;
    cin>>n>>m;


   unsigned long long int* arr = new long long int[n];
  unsigned long long int* arr1 = new long long int[n];


        for( j=0;j<n;j++)
            cin>>arr[j];


     for( i=1;i<m;i++)
       {
       if(i%2==1)
         {for( j=0;j<n-1;j++)
                arr1[j]=arr[j]^arr[j+1];
                arr1[n-1]=arr[n-1]^arr[0];
      } else
       {
         for( j=0;j<n-1;j++)
                arr[j]=arr1[j]^arr1[j+1];
                arr[n-1]=arr1[n-1]^arr1[0];
               /* cout<<"test"<<endl;
                for( j=0;j<n;j++)
                    cout<<arr1[j];
                    cout<<"test"<<endl;
        *///for( j=0;j<n;j++)
            //arr[j]=arr1[j];
       }

       }
       flag=i-1;

      //for( i=1;i<m;i++)


    // for(int j=0;j<m;j++ )
      //  cout<<arr[m-1][j]<<" ";




            if(flag%2==1)
                    for( j=0;j<n;j++)
                    cout<<arr1[j]<<" ";
            else
                for( j=0;j<n;j++)
                cout<<arr[j]<<" ";


    delete[] arr;
   delete[] arr1;



    return 0;
}
