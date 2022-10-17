#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int f=-1,r=-1;
int que[SIZE];

void enqueue()
{
    if(r==SIZE-1)
        printf("the queue is full");
    else
    {
        if(f==-1)
            f=0;
            int ele;
            printf("enter the element");
            scanf("%d",&ele);
            r=r+1;
            que[r]=ele;
    }
}
void dequeue()
{
    int ele;

    if(f==-1 || f>r)
        printf("the queue is empty");
    else
     {
        ele=que[f];
        f+=1;
     }
    printf("the deleted element %d",ele);
}
void display()
{
    int i;
    if(f==-1)
        printf("queue is empty");
    else
        for(i=f;i<=r;i++)
        {
            printf("%d  ",que[i]);
        }
}
void main()
{
    int ch;
    do
    {
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("enter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n wrong input");
    }
    } while(ch>=0 && ch<=5);
}
