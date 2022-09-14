#include<stdio.h>
void main()
{
    int i,n,a[10],pos,key,option;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("enter the pos and key element\n");
    scanf("%d\n%d",&pos,&key);
    printf("enter the option\n");
    printf("1.insert\n 2.delete\n");
    scanf("%d",&option);
    switch(option)
        {
        case 1:
            for(i=n;i>=pos;i--)
                a[i]=a[i-1];
            a[pos-1]=key;
            for(i=0;i<=n;i++)
                printf("%d",a[i]);
            break;
        case 2:
            for(i=pos-1;i<n;i++)
                a[i]=a[i+1];
            for(i=0;i<n-1;i++)
                printf("%d\t",a[i]);
            break;

        }
}
