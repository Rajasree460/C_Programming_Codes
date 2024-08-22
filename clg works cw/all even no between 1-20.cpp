/* print all even no between 1 to 20 */
#include<stdio.h>
 int main()
 {
 	int i,n;
 	printf("enter the value of n\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		if(i%2==0)
 		 printf("the no  %d is even\n",i);
 		 
	 }
	 return 0;
 }
