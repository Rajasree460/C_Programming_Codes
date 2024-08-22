/* write a c programme wheather a no is  prime number or not */
#include<stdio.h>
 int main()
 {
 	int i,n;
 	printf("enter the value of n\n");
 	scanf("%d",&n);
 	for(i=2;i<=n/2;i++)
 	{
 		if(n%i==0)	 
 		 printf("not prime no ");
 		else
		 printf("prime no"); 
   }
   return 0;
 }
