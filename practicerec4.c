//compute x^n using recursion
#include<stdio.h>

int main()
{
    int base,index,res;
    printf("\nEnter the base ");
    scanf("%d",&base);
    printf("\nEnter the index ");
    scanf("%d",&index);
    res = expo(base,index);
    printf("\n2 raised to the index %d is %d",index,res);
    return 0;
}
int expo(int base,int index)
{
    if(index==0)
        return 1;
    else
        return (base * expo( base, index-1));
}