#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
