#include<stdio.h>
void main()
{
    int a[10],n,i,l,h,key,mid,flag=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]>key)
            h=mid-1;
        else if(a[mid]<key)
            l=mid+1;
    }
    if(flag==1)
    {
        printf("element found");
    }
    else
    {
        printf("not found");
    }
}

