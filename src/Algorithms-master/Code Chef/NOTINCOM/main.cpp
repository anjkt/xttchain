#include<iostream>
using namespace std;
#define lli long long int
int main()
{
	lli t,n,m,i,j,count;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		lli a[n],b[m];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		count=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i]==b[j])
					count++;
		cout<<count<<endl;
	}
	return 0;
}