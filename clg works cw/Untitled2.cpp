/* prime no by using break */
#include<stdio.h>
 int main()
 {
 	int i,n,flag =0;
 	printf("enter the value of n\n");
 	scanf("%d",&n);
 	for(i=2;i<=(n/2);i++)
 	{
 		{
		 
 		if(n%i==0)
 		 flag =0;
 		else
		 flag =1;
	}
	 
	 
	 
	 if(flag==0)
	  printf("not prime no");
	 
	 else
	 printf(" prime no");
	  return 0;
}

}

