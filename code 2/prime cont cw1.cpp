/*prime no using flag*/
#include<stdio.h>
int main()
{
	int n,flag=0,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
		{
		
		if(n%i==0)
		flag=0;
		else
		flag=1;
	    }
	  {
	  
	if(flag=1)
	printf("prime no");
	else
	continue;
      }
  }
	
	return 0;
}
