/*even using func*/
#include<stdio.h>
int even(int x);
int main()
{
	int n,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=even(n);
	if(k==2)
	printf("even ");
	else
	printf("not even");
	return 0;
}
int even(int x)
{
	if(x%2==0)
	return 2;
	else
	return 1;
}
