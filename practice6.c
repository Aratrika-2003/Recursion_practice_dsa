//print name n times using recursion
#include<stdio.h>
void display(char [],int);
int main()
{
	int n;
	char s[40];
	printf("enter your name ");
    fgets(s,sizeof(s),stdin);
	printf("enter how many times name is to be printed ");
	scanf("%d",&n);
	display(s,n);
	return 0;
}
void display(char name[],int n)
{
	int i;
	if(n==0)
		return;
	else if(n==1)
		printf("%s\n",name);
	else
	{	display(name,n-1);
		printf("%s\n",name);
	}
}