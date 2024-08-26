/*min by array*/
#include<stdio.h>
void minimum(int a1[],int n1);
int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter te values for array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	minimum(a,n);
	return 0;
}
void minimum(int a1[],int n1)
{
  int i,min;
  min=a1[0];
for(i=0;i<n1;i++)
{
	if(a1[i]<=min)
	min=a1[i];
}
printf("the min is:%d",min);
}
