/*pointer*/
#include<stdio.h>
int main()
{
int x=5;
int y=6;
int *p;
int *q;
p=&x;
q=&y;
*p=*q;
printf("address of x:%u\n",p);
printf("address of y:%u\n",q);
printf("value of x:%d\n",*p);
printf("value of y:%d\n",*q);
 return 0;
}

