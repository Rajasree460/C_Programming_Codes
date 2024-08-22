/* print the sum of all even no from 1 to 20 */
#include<stdio.h>
 int main()
 {
 	int i,n,sum=0;
 	printf("enter the value of n\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%2==0)
 		 sum=sum=i;
	 }
	 printf("sum is %d",sum);
	return 0; 
 }
