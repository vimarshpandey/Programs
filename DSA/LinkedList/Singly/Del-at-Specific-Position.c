<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void delete_at_middle(int);
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("List before deletion function\n");
  traverse();
  printf("\nList after deletion function\n");
  delete_at_middle(2);
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
        else{
        while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void delete_at_middle(int loc)
{
  int i=1;
  struct node *t1,*t2;
  t1=start;

  if (start == NULL) {
    printf("list is empty\n");
    return;
  }
  else{

    while(i<loc)
        {
            t2=t1;
            t1=t1->next;
            if(t1 == NULL){
                printf("\nCan't Delete\n");
                return;
            }
            i++;
        }
        t2->next = t1->next;
        free(t1);
  }
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  while (t->next != NULL) {
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
void delete_at_middle(int);
void createlist(int);
void traverse();

int main () {

  createlist(10);
  createlist(20);
  createlist(30);
  printf("List before deletion function\n");
  traverse();
  printf("\nList after deletion function\n");
  delete_at_middle(2);
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
        else{
        while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=ptr;
  }
}
void delete_at_middle(int loc)
{
  int i=1;
  struct node *t1,*t2;
  t1=start;

  if (start == NULL) {
    printf("list is empty\n");
    return;
  }
  else{

    while(i<loc)
        {
            t2=t1;
            t1=t1->next;
            if(t1 == NULL){
                printf("\nCan't Delete\n");
                return;
            }
            i++;
        }
        t2->next = t1->next;
        free(t1);
  }
}

void traverse() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  while (t->next != NULL) {
    printf("%d->", t->data);
    t = t->next;
  }
  printf("%d->NULL", t->data); // Print last node

>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}