//* write a c programme to find a armstrong number *//
#include<stdio.h>
 int main()
 {
 	int n,k,rem,sum=0;
 	
 	printf("enter the value of n\n");
 	scanf("%d",&n);
 	k=n;
 	while(n!=0)
 	{
 		rem=n%10;
 		sum=sum+(rem*rem*rem);
 		n=n/10;
	 }
	if(k==sum)
	 printf("it is an armstrong no");
	else
	 printf("it is not an armstrong no");
	return 0;   
 }
