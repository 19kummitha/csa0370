#include<stdio.h>
void mergesort(int a[10],int l,int mid,int h)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=h-mid;
    int r[n1],le[n2];
    mid=(l+h)/2;
    for(i=0;i<n1;i++)
        le[i]=a[l+i];
    for(i=0;i<n2;i++)
        r[i]=a[mid+1+i];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(le[i]<=r[j])
        {
            a[k]=le[i];
            i+=1;
            k+=1;
        }
        else
        {
            a[k]=r[j];
            j+=1;
            k+=1;
        }
    }
    while(i<n1)
    {
        a[k]=le[i];
        i+=1;
        k+=1;
    }
    while(j<n2)
    {
        a[k]=r[j];
        j+=1;
        k+=1;
    }
}
void combine(int a[], int l, int n)
{
    if (l < n) {
        int mid = l + (n - l) / 2;
        combine(a, l, mid);
        combine(a, mid + 1, n);
        mergesort(a, l, mid, n);
    }
}

void main()
{
    int a[100],n,i;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    combine(a,0,n-1);
    printf("the sorted array is");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
