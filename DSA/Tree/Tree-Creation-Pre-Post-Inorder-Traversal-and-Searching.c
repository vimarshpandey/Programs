#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

struct node* insert(struct node*,int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
void search(struct node*,int);

int main()
{
    int item,searchitem,choice=0;
    while(choice!=6)
    {
        printf("\nChoose one option from below\n");
        printf("1 for Insert\n2 for Inorder\n3 for Preorder\n4 for Postorder\n5 for Search\n6 for exit\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter the element you want to insert\n");
                scanf("%d",&item);
                root=insert(root,item);
                break;
            }
            case 2:
            {
                printf("Inorder traversal\n");
                inorder(root);
                break;
            }
            case 3:
            {
                printf("Preorder reaversal\n");
                preorder(root);
                break;
            }
            case 4:
            {
                printf("Postorder traversal\n");
                postorder(root);
                break;
            }
            case 5:
            {
                printf("Enter the element you want to search\n");
                scanf("%d",&searchitem);
                search(root,searchitem);
                break;
            }
            case 6:
            {
                printf("Thank you for using the program");
            }
            default:
            {
                printf("Enter the valid choice");
            }
        };
    }
    return 0;
}

struct node* insert(struct node* root,int item)
{
    if(root==NULL)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    if(item<root->data)
    {
        root->left=insert(root->left,item);
    }
    else
    {
        root->right=insert(root->right,item);
    }
    return root;
}

void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf(" %d ",root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf(" %d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d ",root->data);
}

void search(struct node *root,int item)
{
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            printf("Element found");
            return;
        }
        else if(temp->data>item)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }

    printf("Element not found");
}