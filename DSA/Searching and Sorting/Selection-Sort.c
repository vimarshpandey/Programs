#include<stdio.h>
int main()
{
    int arr[100],i,j,size,position,temp;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before selection sort\n");
    for (i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for(i=0;i<(size-1);i++)
    {
        position=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[position]>arr[j])
            {
                position=j;
            }
        }
        temp=arr[position];
        arr[position]=arr[i];
        arr[i]=temp;
    }
    printf("Array after selection sort\n");
    for (i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}