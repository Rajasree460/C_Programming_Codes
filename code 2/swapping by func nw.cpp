/*swapping by function*/
#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("after swapping a:%d and b:%d\n");
	return 0;
	
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("in swap function a:%d and b=%d\n");
	
}

