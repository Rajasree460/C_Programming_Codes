//write a c programme to take input of marks of the students and give them marks by grading system by if and else statement
#include<stdio.h>
 int main()
 {
 	int m;
 	printf("enter the number :");
 	scanf("%d",&m);
 	if(m<40)
 	 printf("grade : fail");
 	if(m>=40 && m<50) 
 	 printf("grade = F");
 	if(m>=50 && m<60);
	 printf("grade : E");
	if(m>=60 && m<70)
	 printf("grade : D");
	if(m>=70 && m<80)
	 printf("grade = C");
	if(m>=80 && m<90)
	 printf("grade = B");
	if(m>=90 && m<100)
	 printf("grade = A");
	 return 0;      
 }
