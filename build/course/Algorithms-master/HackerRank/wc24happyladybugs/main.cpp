#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


int main()
{
     int g,n,i,j,flag=1,label=1;
     char a[100];
     cin>>g;
     int * ans=new int[n];
     //vector <int> ans(g);

     for(i=0;i<g;i++)
     {
        //cout<<"16";
        int cnt[31]={0};
        //for(j=0;j<26;j++)
          //  {
            //    cnt[i]=0;
              //  cout<<cnt[i]<<"  ";
            //}
        flag=1;label=1;

        cin>>n;
        for(j=0;j<n;j++)
            cin>>a[j];
        //cout<<"22";
         for(j=0;j<n;j++)
                            //to check whether someone is lonely
            {
                if(a[i]=='_')
                    continue;

                cnt[a[j]-65]++;
               cout<<a[j]-65;

            }
                                   // cout<<"32"<<endl;//""    ""     ""      ""     ""
     //   for(j=0;j<26;j++)
     //   cout<<cnt[j]<<"\t";

        for(j=0;j<26;j++)
            {
            //cout<<"38"<<" ";
            if(cnt[j]==1)
               {
              //     cout<<"41"<<"  ";
                   ans[i]=0;
                    label=0;
                    break;
               }
               //cout<<"45"<<"  ";
            }

            //cout<<"$8"<<"  ";
        if(label==0)
            continue;

              // cout<<"44";                             //""    ""     ""      ""     ""

        for(j=1;j<n;j++)                    // to check phele se sahi he ya nahi
        {
            if(a[j]=='_')
                continue;
            if(a[j]==a[j+1]||a[j]==a[j-1])
                continue;
            else  //implies phele se sahi nahi he
                {
                    flag=0;
                    break;
                }
        }                                   // to check phele se sahi he ya nahi

        if(flag==0)
        {
            for(j=0;j<n;j++)
             {
               if(a[j]=='_')
                        break;
             }
            if(j==n)            //implies kahi pe bhi _ nahi he..

                {
                    ans[i]=0;
                    continue;
                }
            else
                {
                    ans[i]=1;
                    continue;
                }
        }
        else
            {
                ans[i]=1;
                continue;
            }

        for(j=0;j<n;j++)        //to check if there are no alphabets
        {
          if(a[j]>'A'&&a[j]<'Z')
                break;
        }
        if(j=n)         //implies break se bhar nahi aaya he he
        {
            ans[i]=1;
            continue;
        }


     }

     for(j=0;j<g;j++)
     {
        //cout<<ans[j];

         if(ans[j]==0)
         cout<<"NO"<<endl;
         else
        cout<<"YES"<<endl;
     }

delete [] ans;
}
