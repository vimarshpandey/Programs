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
 void ins_at_beg(int);
 void ins_at_end(int);
 void traverse();

 int main()
 {
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("Elements before insertion at beginning.\n");
    traverse();
    ins_at_beg(5);
    printf("\nElements after insertion  at beginning\n");
    traverse();
    printf("\nElements after insertion  at end\n");
    ins_at_end(60);
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

 void ins_at_beg(int x)
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
        temp->prev=ptr;
        ptr->next=temp;
        ptr->prev=NULL;
        start=ptr;
    }
 }

 void ins_at_end(int x)
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
        ptr->prev=temp;
        temp->next=ptr;
        ptr->next=NULL;
    }
 }