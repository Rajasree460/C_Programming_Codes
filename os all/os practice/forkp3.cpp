//process creation & parent child relation(fork() system call)
#include<stdio.h>
#include<unistd.h>

int main(){
	int f_val=fork();
	if(f_val==0){
		printf("from child, pid:%d, ppid:%d, fork return val:%d\n",getpid(),getppid(),f_val);
	}
	else if(f_val>0){
		printf("from parent, pid:%d, ppid:%d, fork return val:%d\n",getpid(),getppid(),f_val);
	}
	else{
		printf("error in fork\n");
	}
	return 0;
} 
