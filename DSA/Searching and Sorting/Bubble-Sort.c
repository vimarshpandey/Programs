#include<stdio.h>
int main()
{
    int arr[100],size,i,j,temp;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before bubble sort\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array after bubble sort\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}