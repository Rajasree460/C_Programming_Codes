/*switch case*/
#include<stdio.h>
int main()
{
	int x,y,ch,a,b,c,d;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("1.add\n2.subtrac\n3.mul\n4.div\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:a=x+y;
		printf("add is:%d",a);
		break;
		case 2:b=x-y;
		printf("subtrac is:%d",b);
		break;
		case 3:c=x*y;
		printf("mul is:%d",c);
		break;
		case 4:d=x/y;
		printf("div is:%d",d);
		break;
		defult:
		printf("invalide no");	
	}
	return 0;
}
