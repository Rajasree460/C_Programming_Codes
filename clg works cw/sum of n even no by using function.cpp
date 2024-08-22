//*sum of even no using function*//
#include <stdio.h>
int even(int);
int main()
{
	int i,n,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(even(i)==2)
		 sum=sum+i;
	}
	
	return 0;
}
int even(int x)
{
	if(x%2==0)
	 return 2;
	else
	 return 1; 
}
