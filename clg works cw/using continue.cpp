/* c programme using continue */
#include<stdio.h>
 int main()
 {
 	int i,j;
 	for(i=0;i<5;i++)
 	for(j=0;j<5;j++)
 	{
 		if(i==j)
 		 continue;
 		else
		 printf("%d\t%d\n",i,j); 
	 }
	 return 0;
 }
