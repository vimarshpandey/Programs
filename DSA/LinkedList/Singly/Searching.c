#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void createlist(int);
void searching();
void traverse();

int main ()
{
  createlist(10);
  createlist(20);
  createlist(30);
  createlist(40);
  createlist(50);
  createlist(60);
  printf("Linked list is: \n");
  traverse();
  searching();
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

}

void searching()
{
    int loc=1,item;
    struct node *temp;
    temp=start;
    printf("\nEnter the element you want to search.\n");
    scanf("%d",&item);
    if(start==NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
         while(temp->data!=item)
        {
            temp=temp->next;
            loc=loc+1;
        }
        printf("Node is found at %d location.\n",loc);
    }
}