#include <iostream>

using namespace std;

int main()
{
    char a[15][15];
    int n,m,lth=1,found=0;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    for(int i=0;i<n;i++)

      {

        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='G')
            {
               lth=1;j++;
                while(a[i][j]=='G')
                {
                    j++;lth++;
                }
                j--;l--;

                if(lth>largest&&lth%2!=0)
                    {
                        largest=lth;
                        pos=j-lth/2;

                    }



            }
        }
      }




      return 0;

}
