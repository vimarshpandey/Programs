#include<stdio.h>
int main()
{
    int arr[100],size,index,element;
    printf("Enter the sise of the array: \n");
    scanf("%d",&size);
    printf("Enter the elemets of the array: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before insertion: \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the index at which you want to enter the element: \n");
    scanf("%d",&index);
    printf("Enter the element you want to insret");
    scanf("%d",&element);
    if(index>size)
    {
        printf("Insertion is not possible: \n");
    }
    else
    {
        size=size+1;
        int i=size;
        while(i>=index)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[index]=element;
    }
     printf("Array elements after insertion: \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}