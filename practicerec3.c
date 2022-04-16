//compute 2^n using recursion
#include<stdio.h>

int main()
{
    int base=2,index,res;
    printf("\nEnter the index of 2 ");
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