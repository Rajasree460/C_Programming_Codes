/*minimum value among n no using array*/
#include<stdio.h>
int main()

{
	int i,n,min;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    min =a[0];
    for(i=0;i<n;i++)
    {
    	a[i+1]<min;
    	min=a[i];
	}
	printf(" the min value :%d",min);
	return 0;
}
