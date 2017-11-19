#include <iostream>
#include<math.h>
#include<ve


using namespace std;


int main(){
    float x1;
    float v1;
    float x2;
    float v2;
    cin >> x1 >> v1 >> x2 >> v2;

    float a=x1-x2,b=v2-v1;
    if(b==0)
    {
      if(a==0)
      {
            cout<<"YES";
            return 0;
      }
      else
      {
          cout<<"NO";
              return 0;
      }
    }

    float t=a/b;

   // cout<<"A"<<a<<"    B"<<b<<"     T"<<t;
    if(floor(t)-t!=0)
    {
        cout<<"NO";
        return 0;
    }
    if(t>=0)
        cout<<"YES";
    else if(t<0)
        cout<<"NO";
}
