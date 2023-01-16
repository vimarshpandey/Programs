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
    printf("Array before insertion sort\n");
    for (i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
     printf("Array after insertion sort\n");
    for (i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}