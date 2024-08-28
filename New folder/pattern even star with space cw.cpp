/*pattern printing 4 even  no of stars*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2-i;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		printf("* ");
		
		printf("\n");
	}
	return 0;
}
