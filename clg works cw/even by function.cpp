//*even using  function*//
#include<stdio.h>
int even(int);
int main()
{
	int n,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=even(n);
	if(k==2)
	 printf("even no");
	else if(k==1)
	 printf("odd n0");
	 return 0;
	  
}
int even(int x)
{
	if(x%2==0)
	 return 2;
	else
	 return 1;
}
