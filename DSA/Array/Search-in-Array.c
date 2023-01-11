#include<stdio.h>
int main()
{
    int arr[100],size,item,j=0;
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
    printf("Enter the item you want to search:\n");
    scanf("%d",&item);
    while(j<size)
    {
        if(arr[j]=item)
        break;
        j++;
    }
    printf("Element found at %d location",(j+1));
}