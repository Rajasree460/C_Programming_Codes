//fcfs with at
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int pid,bt,wt,tt,at;
}sp;

int main(){
	int n,i,j,towt=0,tott=0,tbm=0;
	sp *p,t;
	printf("fcfs at\n");
	printf("enter the no. of processes: ");
	scanf("%d",&n);
	p=(sp *)malloc(n*sizeof(sp));
	for(i=0;i<n;i++){
		p[i].pid=i+1;
		printf("\nenter the bt of process id %d: ",p[i].pid);
		scanf("%d",&p[i].bt);
		printf("enter the at of process id %d: ",p[i].pid);
		scanf("%d",&p[i].at);
	}
	
	//sort processes by their at
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i].at>p[j].at){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	
	//print & cal
	printf("\nprocess scheduling\n");
	printf("process\tburst\tarrival\twaiting\tturnaround\n");
	for(i=0;i<n;i++){
		tbm+=p[i].bt;
		p[i].tt=tbm-p[i].at;
		p[i].wt=tbm-p[i].bt-p[i].at;
		towt+=p[i].wt;
		tott+=p[i].tt;
		printf("%d\t%d\t%d\t%d\t%d\n",p[i].pid,p[i].bt,p[i].at,p[i].wt,p[i].tt);
	}
	printf("Avg wt:%.2f\n",(float)towt/n);
	printf("Avg tt:%.2f\n",(float)tott/n);
	free(p);
	return 0;
}
