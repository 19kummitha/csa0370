#include<stdio.h>
int facto(n)
{
    if(n==1)
        return 1;
    else
        return(n*facto(n-1));
}
void main()
{
    int n,fact;
    printf("enter the number");
    scanf("%d",&n);
    fact=facto(n);
    printf("factorial of number is%d",fact);
}
