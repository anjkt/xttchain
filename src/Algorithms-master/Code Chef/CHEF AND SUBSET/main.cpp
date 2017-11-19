#include "stdio.h"
int main()
{
	long int t,a,b,c,d,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
		
		if((a+b+c+d)==0 || (a+b+c)==0 ||(a+b)==0 || (a+b+d)==0 || (b+c+d)==0 || (a+c+d)==0 || (a+c)==0 ||(a+d)==0 ||(b+c)==0 || (b+d)==0 || (c+d)==0 || a==0 || b==0 || c==0 || d==0)
					printf("Yes\n");
		
		else
					printf("No\n");
	}
	return 0;
} 