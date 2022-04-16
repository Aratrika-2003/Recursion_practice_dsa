//to print the sum of n natural numbers using recursion
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("\nEnter the value of n ");
    scanf("%d",&n);
    printf("\nThe sum of the first %d natural numbers is = %d",n,sum(n));

    return 0;
}
int sum(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n+sum(n-1);
}