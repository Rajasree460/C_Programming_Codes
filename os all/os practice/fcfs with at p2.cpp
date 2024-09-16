//fcfs with at
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int pid,bt,wt,tt,at;  //struct array
}sp;

int main(){
	int n,i,j,towt=0,tott=0,tbm=0;
	sp *p,t; //dynamic array
	printf("FCFS scheduling..\n");
	printf("enter the no. of processes:");
	scanf("%d",&n);
	p=(sp *)malloc(n * sizeof(sp));   //dynamic memory allocation for p
	for(i=0;i<n;i++){
		p[i].pid=i+1;
		printf("\nenter the burst time for process id %d:",p[i].pid);
		scanf("%d",&p[i].bt);
		printf("\nenter the arrival time for process id %d:",p[i].pid);
		scanf("%d",&p[i].at);
	}
	//sort processes by their arrival time
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i].at>p[j].at){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	//calculation
	printf("\nprocess scheduling..\n");
	printf("process\tburst\tarrival\twaiting\tturnaround\n");
	for(i=0;i<n;i++){
	tbm+=p[i].bt;
	p[i].tt=tbm-p[i].at;
	p[i].wt=tbm-p[i].bt-p[i].at;
	towt+=p[i].wt;
	tott+=p[i].tt;
	printf("%d\t\t%d\t%d\t%d\t%d\n",p[i].pid,p[i].bt,p[i].at,p[i].wt,p[i].tt);
    }
    printf("avg waiting time:%.2f\n",(float)towt/n);
    printf("avg turnaround time:%.2f\n",(float)tott/n);
    free(p);
    return 0;
}
