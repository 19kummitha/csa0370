#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("even numbers in the array are");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf(" %d\t",a[i]);
        }
    }
    printf("odd numbers in the array are");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf(" %d\t",a[i]);
        }
    }
}
