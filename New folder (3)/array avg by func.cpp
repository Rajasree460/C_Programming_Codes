/*avg of array by using function*/
#include<stdio.h>
void avg(int a1,int n1);
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
	avg(a,n);
	return 0;
}
void avg(int a1,int n1)
{
	int i,sum=0;
	float avg;
	for(i=0;i<n1;i++)
	{
		sum=sum+a1[i];
		avg=(float)sum/n1;
	}
	printf("the sum is:%d",avg);
}
