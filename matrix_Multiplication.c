#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p;
    printf("enter the values of n,m,p");
    scanf("%d%d%d",&n,&m,&p);
    printf("enter the a matrix elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the b matrix elements");
    for(j=0;j<m;j++)
    {
        for(k=0;k<p;k++)
        {
            scanf("%d",&b[j][k]);
        }
    }

     for(i=0;i<n;i++)
       {
        for(k=0;k<p;k++)
        {
            c[i][k]=0;

                for(j=0;j<m;j++)
                {
                    c[i][k]+=a[i][j]*b[j][k];
                }
        }

        }
     for(i=0;i<n;i++)
    {
        for(k=0;k<p;k++)
        {
            printf("%d ",c[i][k]);
        }
        printf("\n");
    }
}
