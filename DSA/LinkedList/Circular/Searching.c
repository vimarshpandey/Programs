#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start=NULL;
void createlist(int);
void traverse();
void searching();

int main()
{
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    createlist(60);
    printf("Linked list is\n");
    traverse();
    searching();
    return 0;
}

void createlist(int x)
{
    struct node *ptr, *temp;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=start;
    }
}

void traverse()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp->next!=start)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

void searching()
{
    int loc=1,item;
    struct node *temp;
    temp=start;
    printf("\nEnter the item you want to search\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp->data!=item)
        {
            temp=temp->next;
            loc=loc+1;
        }
        printf("Node is found at %d location",loc);
    }
}