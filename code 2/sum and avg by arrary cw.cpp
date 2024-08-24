/*sum & avg of n no using arrary*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=(sum)/n;
	}
	
	printf(" the sum:%d and avg:%f",sum,avg);
	return 0;
}
	 
