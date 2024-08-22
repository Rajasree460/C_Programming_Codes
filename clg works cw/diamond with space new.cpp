//*diamond with space*//
#include<stdio.h>
int main()
{
int i,j,n,i1,j1;
printf("enter value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<n-i;j++)
{
printf(" ");
 }
 for(j=1;j<=i*2-1;j++)
 {
 printf("* ");
}
printf("\n"); 
}

for(i1=n-1;i1>0;i1--)
{
for(j1=0;j1<=n-i1;j1++)
{
printf(" ");
}
for(j1=0;j1<=(i1*2)-1;j1++)
{
printf("* ");
}
printf("\n");
return 0;
}
}
