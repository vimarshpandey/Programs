<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start=NULL;
void createlist(int);
void ins_at_middle(int, int);
void traverse();

int main()
{
    createlist(10);
    createlist(20);
    createlist(40);
    createlist(50);
    createlist(60);
    printf("Elements before insertion at middle.\n");
    traverse();
    printf("\nElements after insertion at middle.\n");
    ins_at_middle(30,2);
    traverse();
    return 0;
}

void createlist(int x)
 {
    struct node *ptr, *temp;
    temp=start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        start->next=NULL;
        start->prev=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
 }

 void traverse()
 {
    struct node *t;
    t=start;
    if(start==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        while(t->next!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("%d->NULL",t->data);
    }
 }

 void ins_at_middle(int x, int loc)
 {
    int i=1;
    struct node *ptr, *temp;
    temp=start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        start->next=NULL;
        start->prev=NULL;
    }
    else
    {
        while(i<loc)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("cant insert.\n");
            }
            i++;
        }
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
        temp->next->next->prev=ptr;
    }
=======
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start=NULL;
void createlist(int);
void ins_at_middle(int, int);
void traverse();

int main()
{
    createlist(10);
    createlist(20);
    createlist(40);
    createlist(50);
    createlist(60);
    printf("Elements before insertion at middle.\n");
    traverse();
    printf("\nElements after insertion at middle.\n");
    ins_at_middle(30,2);
    traverse();
    return 0;
}

void createlist(int x)
 {
    struct node *ptr, *temp;
    temp=start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        start->next=NULL;
        start->prev=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
 }

 void traverse()
 {
    struct node *t;
    t=start;
    if(start==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        while(t->next!=NULL)
        {
            printf("%d->",t->data);
            t=t->next;
        }
        printf("%d->NULL",t->data);
    }
 }

 void ins_at_middle(int x, int loc)
 {
    int i=1;
    struct node *ptr, *temp;
    temp=start;
    ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(start==NULL)
    {
        start=ptr;
        start->next=NULL;
        start->prev=NULL;
    }
    else
    {
        while(i<loc)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("cant insert.\n");
            }
            i++;
        }
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
        temp->next->next->prev=ptr;
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
 }