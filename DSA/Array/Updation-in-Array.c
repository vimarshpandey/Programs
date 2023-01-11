#include<stdio.h>
int main()
{
    int arr[100],size,item,pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the position you want to update:\n");
    scanf("%d",&pos);
    printf("Enter the new element you want to update to:\n");
    scanf("%d",&item);
    arr[pos]=item;
    printf("Array elements after updation:\n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}