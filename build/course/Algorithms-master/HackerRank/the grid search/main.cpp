#include <vector>
#include <iostream>
using namespace std;




int main(){
    int t,i,k;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> s(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> s[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> ss(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> ss[P_i];
        }
for( i=0;i<C-c+1;i++)
{
    for(int j=0;j<R-r+1;j++)
    {
        if(ss[0][0]==s[i][j])
            {
                for( k=0;k<c;k++)
                    for(int x=0;x<r;x++)
                {
                    if(ss[k][x]!=s[i+k][j+x])
                        break;
                }
                if(k==c)
                break;
            }
        if(k==c)
        break;
    }
if(k==c)
break;
}

    if(i==C-c+1)
        cout<<"NO";
    else cout<<"YES";


    }
    return 0;
}
