#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long int p=s.length();
		long int ctr=2;
		for(long int i=1;i<p;i++)
	   {	
		if(s[i-1]<=s[i])
		ctr+=s[i]-s[i-1]+1;
		else
		ctr+=26-(s[i-1]-s[i])+1;
       }
       
	if(ctr<=11*p)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
    }  
} 