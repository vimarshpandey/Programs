<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
void search();
struct node
{
    int data;
    struct node *next;
};
struct node *start;

int main()
{
    int choice=0;
    while(choice!=5)
    {
        printf("Choose one option from below\n");
        printf("1 for push\n2 for pop\n3 for peek\n4 for display\n5 for exit\n6 for searching\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                printf("Thnak you for using the program");
            }
            case 6:
            {
                search();
                break;
            }
            default:
            {
                printf("Enter the correct choice");
            }
        };
    }
    return 0;
}

void push()
{
    int item;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter the item\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        ptr->data=item;
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->data=item;
        ptr->next=start;
        start=ptr;
    }
}

void pop()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Underflow");
    }
    else
    {
        start=start->next;
        free(temp);
    }
}

void peek()
{
    if(start==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",start->data);
    }
}

void display()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while(temp->next!=NULL)
        {
            if(temp==start)
            {
                printf("%d(Top)->",temp->data);
                temp=temp->next;
            }
            else
            {
                printf("%d->",temp->data);
                temp=temp->next;
            }
        }
        printf("%d->NULL",temp->data);
    }
}

void search()
{
    int item;
    struct node *temp;
    temp=start;
    printf("Enter the item you want to serach\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        while(temp->data!=item)
        {
            temp=temp->next;
        }
        printf("Element found");
    }
=======
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
void search();
struct node
{
    int data;
    struct node *next;
};
struct node *start;

int main()
{
    int choice=0;
    while(choice!=5)
    {
        printf("Choose one option from below\n");
        printf("1 for push\n2 for pop\n3 for peek\n4 for display\n5 for exit\n6 for searching\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                printf("Thnak you for using the program");
            }
            case 6:
            {
                search();
                break;
            }
            default:
            {
                printf("Enter the correct choice");
            }
        };
    }
    return 0;
}

void push()
{
    int item;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter the item\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        ptr->data=item;
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->data=item;
        ptr->next=start;
        start=ptr;
    }
}

void pop()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Underflow");
    }
    else
    {
        start=start->next;
        free(temp);
    }
}

void peek()
{
    if(start==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",start->data);
    }
}

void display()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while(temp->next!=NULL)
        {
            if(temp==start)
            {
                printf("%d(Top)->",temp->data);
                temp=temp->next;
            }
            else
            {
                printf("%d->",temp->data);
                temp=temp->next;
            }
        }
        printf("%d->NULL",temp->data);
    }
}

void search()
{
    int item;
    struct node *temp;
    temp=start;
    printf("Enter the item you want to serach\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        while(temp->data!=item)
        {
            temp=temp->next;
        }
        printf("Element found");
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}