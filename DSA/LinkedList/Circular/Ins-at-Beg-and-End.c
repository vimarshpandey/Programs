<<<<<<< HEAD
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
void ins_at_beg(int);
void ins_at_end(int);

int main()
{
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("List before insetion: \n");
    traverse();
    ins_at_beg(5);
    printf("\nList after insertion at begninning\n");
    traverse();
    ins_at_end(60);
    printf("\nList after insertion at end\n");
    traverse();
    return 0;
}

void createlist(int x)
{
    struct node *ptr, *temp;
    temp =start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
    struct node *ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(ptr->next!=start)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",ptr->data);
    }
}

void ins_at_beg(int x)
{
    struct node *ptr, *temp;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
        start=ptr;
    }
}

void ins_at_end(int x)
{
    struct node *ptr, *temp;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
=======
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
void ins_at_beg(int);
void ins_at_end(int);

int main()
{
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("List before insetion: \n");
    traverse();
    ins_at_beg(5);
    printf("\nList after insertion at begninning\n");
    traverse();
    ins_at_end(60);
    printf("\nList after insertion at end\n");
    traverse();
    return 0;
}

void createlist(int x)
{
    struct node *ptr, *temp;
    temp =start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
    struct node *ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(ptr->next!=start)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",ptr->data);
    }
}

void ins_at_beg(int x)
{
    struct node *ptr, *temp;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
        start=ptr;
    }
}

void ins_at_end(int x)
{
    struct node *ptr, *temp;
    temp=start;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=x;
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
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}