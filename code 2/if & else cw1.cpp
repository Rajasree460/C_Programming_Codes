/*grading system*/
#include<stdio.h>
int main()
{
	int m;
	printf("enter the value of m\n");
	scanf("%d",&m);
	if(m<40)
	printf("fail");
	if(m>=40 && m<50)
	printf("grade:f");
	if(m>=50 && m<60)
	printf("grade:e");
	if(m>=60 && m<70)
	printf("grade:d");
	if(m>=70 && m<80)
	printf("grade:c");
	if(m>=80 && m<90)
	printf("grade:b");
	if(m>=90 && m<100)
	printf("grade:a");
	return 0;
}
