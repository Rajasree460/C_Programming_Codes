/*linear search by using func*/
#include<stdio.h>
void search(int a1[],int n1,int c1);
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
	printf("enter the value for search\n");
	scanf("%d",&c);
	search(a,n,c);
}
void search(int a1[],int n1,int c1)
{
	int i;
	for(i=0;i<n1;i++)
	{
	if(c1==a1[i])
	printf("the index of the search value is:%d",i+1);
   }
}
