<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void insert_at_middle(int, int);
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("List before insert function\n");
  traverse();
  printf("\nList after insert function\n");
  insert_at_middle(40, 2);
  traverse();
  return 0;
}
void createlist(int x)
{
    struct node *ptr,*temp;
    temp=start;

  ptr= (struct node*)malloc(sizeof(struct node));
  ptr->data = x;
  ptr->next=NULL;
  if (start == NULL) {
    start = ptr;
    start->next = NULL;
}
  else
  {
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void insert_at_middle(int x, int loc)
{
  int i=1;
  struct node *t,*temp;
  temp=start;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  t->next=NULL;
  if (start == NULL)
  {
    start = t;
    start->next = NULL;
    return;
  }
  else
  {
  while(i<(loc))
    {
        temp=temp->next;
        if(temp==NULL)//This line is for checking that we reached the last node or not.
        {
                printf("\n Can't Insert\n");
        return;
        }
        i++;
    }

    t->next = temp->next;
    temp->next=t;
    }
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) 
  {
   printf("Linked list is empty.\n");
    return;
  }
  while (t->next != NULL)
  {
    printf("%d->", t->data);
    t = t->next;
  }
  printf("%d->NULL", t->data); // Print last node

=======
#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void insert_at_middle(int, int);
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("List before insert function\n");
  traverse();
  printf("\nList after insert function\n");
  insert_at_middle(40, 2);
  traverse();
  return 0;
}
void createlist(int x)
{
    struct node *ptr,*temp;
    temp=start;

  ptr= (struct node*)malloc(sizeof(struct node));
  ptr->data = x;
  ptr->next=NULL;
  if (start == NULL) {
    start = ptr;
    start->next = NULL;
}
  else
  {
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void insert_at_middle(int x, int loc)
{
  int i=1;
  struct node *t,*temp;
  temp=start;

  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  t->next=NULL;
  if (start == NULL)
  {
    start = t;
    start->next = NULL;
    return;
  }
  else
  {
  while(i<(loc))
    {
        temp=temp->next;
        if(temp==NULL)//This line is for checking that we reached the last node or not.
        {
                printf("\n Can't Insert\n");
        return;
        }
        i++;
    }

    t->next = temp->next;
    temp->next=t;
    }
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) 
  {
   printf("Linked list is empty.\n");
    return;
  }
  while (t->next != NULL)
  {
    printf("%d->", t->data);
    t = t->next;
  }
  printf("%d->NULL", t->data); // Print last node

>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}