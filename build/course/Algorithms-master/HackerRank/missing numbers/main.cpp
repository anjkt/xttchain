#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int * a =   new int [n], *cnta=new int[n];
    int * b =  new int [m], *cntb = new int[m];
    int *c  =  new int [m];

    for(int i=0;i<n;i++)
        cin>>a[i];
   cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];

    for(int i=0;i<n;i++)
    {
        cnta[i]=1;
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
        {
            cnta[i]++;
            for(int k=j;k<n-1;k++)
                a[k]=a[k+1];
            n--;j--;
        }
    }


     for(int i=0;i<m;i++)
    {
        cntb[i]=1;
        for(int j=i+1;j<m;j++)
            if(b[i]==b[j])
        {
            cntb[i]++;
            for(int k=j;k<m-1;k++)
                b[k]=b[k+1];
            m--;j--;
        }
    }

  /*  for(int i=0;i<m;i++)
    {
       //cout<<"I"<<i<<"\t";
        cntb[i]=1;
        for(int j=i+1;j<m;j++)
            if(b[i]==b[j])
        {
         //   cout<<"J"<<j<<"\t";
            cntb[i]++;
           // cout<<"updated value of count "<<cntb[i];
            for(int k=j;k<m-1;k++)
                b[k]=b[k+1];
            m--;j--;
           // cout<<"the updated value of array is"<<endl;
           // for(int x=0;x<m;x++)
             //   cout<<b[x]<<" ";
        }
        cout<<endl;
    }*/

cout<<"ele of a nad then b are m"<<m<<"n"<<n;
cout<<"A:";
for(int i=0;i<n;i++)
    cout<<a[i]<<" "<<cnta[i]<<"\t";
cout<<endl;
cout<<"B:";
for(int i=0;i<m;i++)
    cout<<b[i]<<" "<<cntb[i]<<"\t";
    cout<<endl;
cout<<endl<<"check "<<cntb[0]<<endl;

int temp;
    //sorting

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            temp=cnta[j];
            cnta[j]=cnta[j+i];
            cnta[j+1]=temp;
        }
    }


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-1+1;j++)
        if(b[j]>b[j+1])
        {
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
            temp=cntb[j];
            cntb[j]=cntb[j+i];
            cntb[j+1]=temp;
        }
    }






    int k=0;
  /* for(int i=0,j=0;i<n,j<m;i++,j++)
   {
       if(b[j]==a[i])
       {
           if(cntb[j]!=cnta[i])
            c[k++]=b[j];
       }
       else
        {
            c[k++]=b[j++];

       }
   }*/
cout<<"m"<<m<<"n"<<n;
  int j=0;
   for(int i=0;i<n;i++)
   {
       while(j<m)
        {

        if(a[i]!=b[j])
       {c[k++]=b[j];
       j++;

       }

       else
       {
           if(cnta[i]!=cntb[j])
           {
            c[k++]=b[j];
            j++;
           }
         else{  j++;
           break;
         }
       }

        }
   }




cout<<endl<<"C:";
for(int i=0;i<k;i++)
    cout<<c[i]<<" ";






    delete [] a;
    delete [] b;
        return 0;
}
