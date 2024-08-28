/*even no using function*/
#include<stdio.h>
int even(int);
int main()
{
	int n,k;
	printf("enter the value n\n");
	scanf("%d",&n);
	k=even(n);
	if(k==2)
	printf("even no");
	else
	printf("not even no");
	return 0;n
}
int even(int x)
{
	if(x%2==0)
	return 2;
	else 
	return 1;
	
}
