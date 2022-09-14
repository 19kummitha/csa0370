#include<stdio.h>
void qsort(int a[10],int l,int h)
{
    int p,i,j,t;
       if(l<h)
    {
        i=l;
        j=h;
        p=i;
        while(i<j)
        {
            while(a[i]<=a[p])
            {
                i++;
            }
            while(a[j]>a[p])
            {
                j--;
            }
            if(i<j)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        t=a[p];
        a[p]=a[j];
        a[j]=t;
        qsort(a,l,j-1);
        qsort(a,j+1,h);
    }
}
void main()
{
    int a[10],n,i;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
