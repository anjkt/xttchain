#include "stdio.h"
void main()
{
	int t,i,min=0,max=0;
	char s1[105],s2[105];
	scanf("%d",&t);
	while(t--)
	{
		min=max=0;
		scanf("%s %s",&s1,&s2);
		for(i=0;s1[i]!='\0';i++)
		{
			if(s1[i]=='?'||s2[i]=='?')
				max++;
			else
			if(s1[i]!=s2[i])
				min++;
				
			
		}
		printf("\n%d %d",min,max+min);
	}
	//returno 0;
}
