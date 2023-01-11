<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

void insert();
void deleat();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

int main()
{
    int choice=0;
    while(choice!=5)
    {
        printf("Choose one option from below\n1 for insert\n2 for deleat\n3 for diplay\n4 for exit\nEnter your choice\n");
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
                printf("Thank you for using the program");
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
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter the item\n");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        front->next=NULL;
        rear->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
    }
}

void deleat()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            if(front==rear)
            {
                printf("%d(Front)(Rear)->",temp->data);
                temp=temp->next;
            }
            else if(temp==front)
            {
                 printf("%d(Front)->",temp->data);
                 temp=temp->next;
            }
            else if(temp==rear)
            {
                 printf("%d(rear)->",temp->data);
                 temp=temp->next;
            }
            else
            {
                 printf("%d->",temp->data);
                 temp=temp->next;
            }
        }
    }
=======
#include<stdio.h>
#include<stdlib.h>

void insert();
void deleat();
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

int main()
{
    int choice=0;
    while(choice!=5)
    {
        printf("Choose one option from below\n1 for insert\n2 for deleat\n3 for diplay\n4 for exit\nEnter your choice\n");
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
                printf("Thank you for using the program");
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
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter the item\n");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        front->next=NULL;
        rear->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
    }
}

void deleat()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            if(front==rear)
            {
                printf("%d(Front)(Rear)->",temp->data);
                temp=temp->next;
            }
            else if(temp==front)
            {
                 printf("%d(Front)->",temp->data);
                 temp=temp->next;
            }
            else if(temp==rear)
            {
                 printf("%d(rear)->",temp->data);
                 temp=temp->next;
            }
            else
            {
                 printf("%d->",temp->data);
                 temp=temp->next;
            }
        }
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}