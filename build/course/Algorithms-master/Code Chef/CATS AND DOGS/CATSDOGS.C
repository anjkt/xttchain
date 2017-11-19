#include "stdio.h"
int main() {
  /* code */
  unsigned int t,c,d,l;
  scanf("%d",&t);
  
  while(t--) 
  {
 
 	scanf("%d",&c);
  	scanf("%d",&d);
  	scanf("%d",&l);
  
		if(l%4==0 && d>=0 && c>=0)
		{
			l=l/4;
			
			if(d<=l && l<=c+d)
				printf("yes\n");
			
			else
 				printf("no\n");	
  
		}
		else
			printf("no\n");
   }

  return 0;
}

