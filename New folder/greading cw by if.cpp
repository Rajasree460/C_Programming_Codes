/*greading system by using if & else*/
#include<stdio.h>
int main()
{
	int m;
	printf("enter the value of m\n");
	scanf("%d",&m);
	if(m<40)
	printf("fail");
	if(m>=40 && m<50)
	printf("gread:f");
	if(m>=50 && m<60)
	printf("gread:e");
	if(m>=60 && m<70)
	printf("gread:d");
	if(m>=70 && m<80)
	printf("gread:c");
	if(m>=80 && m<90)
	printf("gread:b");
	if(m>=90 && m<100)
	printf("gread:a");
	return 0;
}
