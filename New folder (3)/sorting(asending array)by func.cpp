/*sorting*/
/*asending of array by func*/
#include<stdio.h>
void sorting(int a1[],int n1);
int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values for array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sorting(a,n);
	return 0;
}
void sorting(int a1[],int n1)
{
	int i,j,temp;
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(a1[i]>a1[j])
			{
			
			temp=a1[i];
			a1[i]=a1[j];
			a1[j]=temp;
		}
		}
	}
	printf("asending order is\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",a1[i]);
	}
}
