//fibonacci series using recursion
#include<stdio.h>
unsigned int fibo(unsigned int);
int main()
{
    unsigned int n;
    printf("\nEnter a number to find its fibonacci series ");
    scanf("%u",&n);
    printf("\nThe fibonacci series is %lu",fibo(n));
    return 0;
}
unsigned int fibo(unsigned int n)
{
    if(n==1||n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}