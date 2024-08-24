/*palindrome  no by using function*/
#include<stdio.h>
int palindrome(int x);
int main()
{
	int n,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=palindrome(n);
	if(k==n)
	printf("palindrome no");
	else 
	printf("not palindrome no");
	return 0;
}
int palindrome(int x)
{
	int rem,rev=0;
	while(x!=0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	return rev;
}
