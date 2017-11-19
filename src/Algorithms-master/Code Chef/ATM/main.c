#include "stdio.h"
int main()
{
	int wid;
	float cur_bal,left_bal;
	scanf("%d",&wid);
	scanf("%f",&cur_bal);
	left_bal=cur_bal-(0.5+wid);
	if(wid%5!=0)
		printf("\n%0.2f",cur_bal);
	else
	if(wid>(cur_bal-0.5))
		printf("\n%0.2f",cur_bal);		
	else
		printf("\n%0.2f",left_bal);
	
	return 0;	
}
