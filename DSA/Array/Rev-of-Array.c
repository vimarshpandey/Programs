#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the size of the array: \n");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before reversing: \n"); 
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    int temp;
    printf("Array after reversing: \n");
    for(int i=0;i<(size/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[size-(i+1)];
        arr[size-(i+1)]=temp;
    } 
    for(int i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}