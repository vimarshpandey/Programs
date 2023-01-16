#include<stdio.h>

int queue[100],front=-1,rear=-1,choice,size;
void insert();
void deleat();
void display();

int main()
{
    printf("Enter the number of elements in queue\n");
    scanf("%d",&size);
    while(choice!=4)
    {
        printf("Choose on option from below\n1 for insert\n2 for deleat\n3 for display\n4 for exit\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                deleat();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("Thank you for using the program\n");
                break;
            }
            default:
            {
                printf("Enter valid choice");
            }
        };
    }
    return 0;
}

void insert()
{
    int item;
    printf("Enter the item you want to insert");
    scanf("%d",&item);
    if(rear==(size-1))
    {
        printf("Overflow");
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=item;
}

void deleat()
{
    if(front==-1||front>rear)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=front+1;
    }
}

void display()
{
    if(front==-1&&front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            if(front==rear)
            {
                printf("%d(Front)(Rear)->",queue[i]);
            }
            else if(i==front)
            {
                printf("%d(Front)->",queue[i]);
            }
            else if(i==rear)
            {
                printf("%d(Rear)->",queue[i]);
            }
            else
            {
                printf("%d->",queue[i]);
            }
        }
    }
}