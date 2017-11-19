#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,a,plus=0,minus=0,zero=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(a>0)
      plus++;
    else if(a<0)
      minus++;
    else
      zero++;
  }
  cout<<(double)plus/n<<endl<<(double)minus/n<<endl<<(double)zero/n;
  return 0;
}
