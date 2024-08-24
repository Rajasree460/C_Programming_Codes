/*switch & case*/
#include<stdio.h>
int main()
{
	int x,y,ch,a,b,c,d;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:a=x+y;
		printf("result:%d",a);
		break;
		case 2:b=x-y;
		printf("result:%d",b);
		break;
		case 3:c=x*y;
		printf("result:%d",c);
		break;
		case 4:d=x/y;
		printf("result:%d",d);
		break;
		defult:
		printf("invalid no");	
	}
	return 0;
}
