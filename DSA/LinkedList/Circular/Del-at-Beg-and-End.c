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
void del_at_beg();
void del_at_end();
void del_at_end();

int main()
{
    createlist(5);
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("\nList before deletion\n");
    traverse();
    del_at_beg();
    printf("\nList after deletion at begninning\n");
    traverse();
    del_at_end();
    printf("\nList after deletion at end\n");
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

void del_at_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("List is empty, Can't deleat");
        return;
    }
    else if(start->next==start)
    {
        start=NULL;
        free(start);
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=start->next;
        free(start);
        start=temp->next;
    }
}

void del_at_end()
{
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("List is empty, can't deleat");
        return;
    }
    else if(start->next==start)
    {
        start=NULL;
        free(start);
    }
    else
    {
        while(t1->next!=start)
        {
            t2=t1;
            t1=t1->next;
        }
        t2->next=t1->next;
        free(t1);
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
void del_at_beg();
void del_at_end();
void del_at_end();

int main()
{
    createlist(5);
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("\nList before deletion\n");
    traverse();
    del_at_beg();
    printf("\nList after deletion at begninning\n");
    traverse();
    del_at_end();
    printf("\nList after deletion at end\n");
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

void del_at_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("List is empty, Can't deleat");
        return;
    }
    else if(start->next==start)
    {
        start=NULL;
        free(start);
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=start->next;
        free(start);
        start=temp->next;
    }
}

void del_at_end()
{
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("List is empty, can't deleat");
        return;
    }
    else if(start->next==start)
    {
        start=NULL;
        free(start);
    }
    else
    {
        while(t1->next!=start)
        {
            t2=t1;
            t1=t1->next;
        }
        t2->next=t1->next;
        free(t1);
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}