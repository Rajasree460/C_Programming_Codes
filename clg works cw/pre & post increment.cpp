//write a c programme by using pre-increment & post-increment
#include<stdio.h>
 int main()
 {
 	int x,y,z;
 	x=5;
 	y=4;
 	z=x++ + ++y;
 	 printf("result :%d\t%d\t%d\t",x++,y++,z);
 	 return 0;
 }
