#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
  long int a[5],min=0,max=0;

  for(int i=0;i<5;i++)
    cin>>a[i];
  for(int i=0;i<5;i++)
    for(int j=i;j<4;j++)
      if(a[j]>a[j+1])
      {
        a[j]+=a[j+1];
        a[j+1]=a[j]-a[j+1];
        a[j]-=a[j+1];
      }
  for(int i=0;i<5;i++)
  {
    if(i<4)
      min+=a[i];
    if(i>0)
      max+=a[i];
  }
  cout<<min<<endl<<max;
  return 0;
}
