/*sum of array by using function*/
#include<stdio.h>
void sum(int a1[],int n1);
int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a,n);
	return 0;
}
void sum(int a1[],int n1)
{
	int i,sum=0;
	for(i=0;i<n1;i++)
	{
		sum=sum+a1[i];
	}
	printf("the sum is:%d",sum);
}
