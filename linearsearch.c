#include<stdio.h>
void main()
{
    int a[10],i,n,key,flag=0,count=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key)
        {
            flag=1;
            count=i+1;

            break;
        }
    if(flag==1)
    {
        printf("the element found at%d",count);
    }
    else
    {
        printf("the element not found");
    }
}
