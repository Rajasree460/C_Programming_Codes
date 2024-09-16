//getpid()
#include<stdio.h>
#include<unistd.h>

int main(){
	printf("this line is from parent, ppid:%d\n",getpid());  //ppid=process identifier of parent process
	
	int f_val=fork();
	if(f_val==0){
		printf("after fork() system call,this line is from child, pid:%d\n",getpid()); //pid=process identifier
	}
	else{
		printf("after fork() system call,this line is from cparent, ppid:%d, fork return val:%d\n",getppid(),f_val);
	}
	return 0;
}
