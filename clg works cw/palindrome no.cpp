//* write a c programme of wheather a no is palindrome or not *//
#include<stdio.h>
 int main()
 {
 	int n,rev=0,rem,k;
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
	 printf("not palindrome no");
	 return 0; 
 }
 
