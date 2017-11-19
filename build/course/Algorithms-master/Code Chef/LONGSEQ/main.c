#include<stdio.h>
#include<string.h>
int main()
{
    int t,x,y,i;
	char ans;
    char s[100001];
    scanf("%d",&t);
    while(t)
    {
		x=0;
		y=0;
			
        scanf("%s",s);
        
		for(i=0;s[i]!='\0';i++)
        {
            
			if(s[i]=='0')
                x++;
            else
                y++;
            
			if(x>1&&y>1)
                break;
                
        }
        
        if(x==1||y==1)
            printf("Yes\n");
        else
            printf("No\n");
    	
    	t--;
    }
    
    return 0;
} 
 
