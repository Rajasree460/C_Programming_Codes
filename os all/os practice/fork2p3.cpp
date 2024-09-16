//fork() 2
#include<stdio.h>
#include<unistd.h>

int main(){
	int f_val=fork();
	if(f_val==0){
		printf("this line is from child\n");
	}
	else{
		printf("this line is from parent, fork return val:%d\n",f_val);
	}
	return 0;
} 
