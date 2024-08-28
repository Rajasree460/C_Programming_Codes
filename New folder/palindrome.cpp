/*palindrome no*/
#include<stdio.h>
int main()
{
	int n,k,rev=0,rem;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(k==rev)
	printf("palindrome no");
	else
	printf("not palindrome");
	return 0;
}
