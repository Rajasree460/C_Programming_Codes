/* find vowel and consonant*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45];
	int i,v=0,c=0;
	printf("enter your name:");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		v++;
		else
		c++;
	}
	printf("vowels:%d\n",v);
	printf("consonants:%d\n",c);
	return 0;
}
