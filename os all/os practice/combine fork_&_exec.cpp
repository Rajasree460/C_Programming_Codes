//combining fork() & exec()
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	char *argv[3]={"command line",".",NULL};
	
	int f_val=fork();
	if(f_val==0){  //child process
		execvp("find",argv);
	}
	
	//put parent in sleep,let the child finish its execution
	wait((int *)2);
	printf("parent finished its execution,we won't get child here, we can only see it for once\n");
	return 0;
}
