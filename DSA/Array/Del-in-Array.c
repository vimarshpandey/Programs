#include<stdio.h>
int main()
{
    int arr[100],size,index;
    printf("Enter the size of the array: \n");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before deletion: \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the index of the element which you want to deleat: \n");
    scanf("%d",&index);
    if(index>size)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        int i=index+1;
        while(i<size)
        {
            arr[i-1]=arr[i];
            i=i+1;
        }
        size=size-1;
    }
    printf("Array elements after deletion: \n");
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}