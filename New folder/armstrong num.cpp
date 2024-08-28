/*armstrong no using function without using power*/
#include<stdio.h>
int armstrong(int x);
int power(int y);
int main()
{
	int n,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=armstrong(n);
	if(k==n)
	printf("armstrong no");
	else
	printf("not armstrong no");
	return 0;
}
int armstrong(int x)
{
	int sum=0,rem;
	while(x!=0)
	{
		rem=x%10;
		sum=sum+power(rem);
		x=x/10;
	}
	return sum;
}
int power(int y)
{
	int c;
	c=(y*y*y);
	return c;
}

