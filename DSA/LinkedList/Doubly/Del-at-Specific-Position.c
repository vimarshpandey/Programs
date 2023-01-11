<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;
void createlist(int);
void traverse();
void del_at_middle(int);

int main ()
{

  createlist(10);
  createlist(20);
  createlist(30);
  createlist(40);
  createlist(50);
  printf("List before deleat function\n");
  traverse();
  printf("\nList after deleat function\n");
  del_at_middle(3);
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

void del_at_middle(int loc)
{
    int i=1;
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
        while(i<loc)
        {
            t2=t1;
            t1=t1->next;
            if(t1==NULL)
            {
                printf("cant deleat.\n");
            }
            i++;
        }
        t2->next=t1->next;
        t1->next->prev=t2;
        free(t1);
    }
=======
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start=NULL;
void createlist(int);
void traverse();
void del_at_middle(int);

int main ()
{

  createlist(10);
  createlist(20);
  createlist(30);
  createlist(40);
  createlist(50);
  printf("List before deleat function\n");
  traverse();
  printf("\nList after deleat function\n");
  del_at_middle(3);
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

void del_at_middle(int loc)
{
    int i=1;
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
        while(i<loc)
        {
            t2=t1;
            t1=t1->next;
            if(t1==NULL)
            {
                printf("cant deleat.\n");
            }
            i++;
        }
        t2->next=t1->next;
        t1->next->prev=t2;
        free(t1);
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}