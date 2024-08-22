/*linear search*/
#include<stdio.h>
int main()
{
	int i,n,p,search;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("enter the value of p\n");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
    	if(a[i]==p)
    	search=i+1;
	}
	printf("the result is:%d",search);
	
	return 0;
}
