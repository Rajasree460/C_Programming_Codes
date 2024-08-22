//*linear search using array
#include<stdio.h>
int main()
{
	int n,i,c,j;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	
	}
	printf("enter the value for search\n");
	scanf("%d",&c);
	for(j=0;j<n;j++)
	{
		if(c==a[j])
		
    printf("%d",j+1);
		
	}
	
	return 0;
	
}
