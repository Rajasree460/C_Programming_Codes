/*linear search by array*/
#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&a[i]);
   }
   printf("enter the values for search\n");
   scanf("%d",&c);
   for(i=0;i<n;i++)
   {
   	if(c==a[i])
   	printf("the index of search value:%d",i);
   	
   }
   
   return 0;
}
