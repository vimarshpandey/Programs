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
int count();
void createlist(int);
void traverse();
void del_at_beg();
void del_at_end();
void searching();

int main()
{
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("\nList before deletion at begninning.\n");
    traverse();
    del_at_beg();
    printf("\nList after deletion at begninning.\n");
    traverse();
    del_at_end();
    printf("\nList after deletion at end.\n");
    traverse();
    printf("\nAt end %d nodes are there in the list.\n",(count()+1));
    searching();
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

void del_at_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        temp=start->next;
        free(start);
        start=temp;
        start->prev=NULL;
    }
}

void del_at_end()
{
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        t2->next=NULL;
        free(t1);
    }
}

int count()
{
    int size=0;
    struct node *t;
    t=start;
    if(start==NULL)
    {
        return size;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
            size=size+1;
        }
        return size;
    }
}

void searching()
{
    int loc=1, item;
    struct node *t;
    t=start;
    printf("Enter the element you want to search.\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        while(t->data!=item)
        {
            t=t->next;
            loc=loc+1;
        }
        printf("Element found, it is present at %d location",loc);
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
int count();
void createlist(int);
void traverse();
void del_at_beg();
void del_at_end();
void searching();

int main()
{
    createlist(10);
    createlist(20);
    createlist(30);
    createlist(40);
    createlist(50);
    printf("\nList before deletion at begninning.\n");
    traverse();
    del_at_beg();
    printf("\nList after deletion at begninning.\n");
    traverse();
    del_at_end();
    printf("\nList after deletion at end.\n");
    traverse();
    printf("\nAt end %d nodes are there in the list.\n",(count()+1));
    searching();
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

void del_at_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        temp=start->next;
        free(start);
        start=temp;
        start->prev=NULL;
    }
}

void del_at_end()
{
    struct node *t1, *t2;
    t1=start;
    if(start==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        t2->next=NULL;
        free(t1);
    }
}

int count()
{
    int size=0;
    struct node *t;
    t=start;
    if(start==NULL)
    {
        return size;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
            size=size+1;
        }
        return size;
    }
}

void searching()
{
    int loc=1, item;
    struct node *t;
    t=start;
    printf("Enter the element you want to search.\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        while(t->data!=item)
        {
            t=t->next;
            loc=loc+1;
        }
        printf("Element found, it is present at %d location",loc);
    }
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}