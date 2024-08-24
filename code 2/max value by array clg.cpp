/*maximum value among n no using array*/
#include<stdio.h>
int main()

{
	int i,n,max;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    max =a[0];
    for(i=0;i<n;i++)
    {
    	a[i+1]>max;
    	max=a[i];
	}
	printf(" the max value :%d",max);
	return 0;
}
