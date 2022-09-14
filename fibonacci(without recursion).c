#include<stdio.h>
void main()
{
    int a=0;
    int b=1,n,c,i;
    c=a+b;
    printf("enter the n value");
    scanf("%d",&n);
    printf("Fibonacci series %d%d",a,b);
    for(i=2;i<n;i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }

}
