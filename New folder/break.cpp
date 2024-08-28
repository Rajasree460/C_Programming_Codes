/*whether a no is perfect or not by break*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	
	{
		if(n%i==0)
		sum=sum+i;
		
	
	}
	
	
	if(sum==n)
	printf("perfect no");
	else
	break;
    
    
   }
    
return 0;	
}
