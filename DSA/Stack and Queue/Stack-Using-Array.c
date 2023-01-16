#include<stdio.h>

int stack[100],size = 0,choice=0,top=-1;
void push();
void pop();
void peek();
void display();
void search();

int main()
{
    printf("Enter the size of the stack\n");
    scanf("%d",&size);
    while(choice!=5)
    {
        printf("Choose one option from below\n");
        printf("1 for push\n2 for pop\n3 for peek\n4 for display\n5 for exit\n6 for serahing\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            printf("Thank you for using the program");
        }
        case 6:
        {
            search();
            break;
        }
        default:
        {
            printf("Enter valid choice");
        }
    };
    }
    return 0;
}

void push()
{
    int item;
    if(top==(size-1))
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the item");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        top=top-1;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Stack top is at %d loc with the %d element",(top+1),stack[top]);
    }
}

void display()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            if(i==top)
            {
                printf("%d(Top)->",stack[i]);
            }
            else
            {
                printf("%d->",stack[i]);
            }
        }
    }
}

void search()
{
    int item,i;
    printf("Enter the item you wnat to serach\n");
    scanf("%d",&item);
    for(i=top;i>=0;i--)
    {
        if(stack[i]==item)
        {
            printf("Element found");
            break;
        }
    }
    if(i < 0)
        printf("Not Found....");
}