//factorial of n numbers using recursion
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("\nEnter the number for finding factorial ");
    scanf("%d",&n);
    printf("The factorial of the number is = %d",fact(n));

    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}