#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m[n][n],sum=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        cin>>m[i][j];
    for(int i=0;i<n;i++)
        sum+=m[i][i]-m[n-i-1][i];
    cout<<abs(sum);
    return 0;
}
