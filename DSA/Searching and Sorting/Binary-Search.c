<<<<<<< HEAD
#include<stdio.h>

int binarysearch(int arr[],int,int,int);

int main()
{
    int arr[100],size,i,j,temp,low=0,item;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int high = size - 1;
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    printf("Enter the item you want to search\n");
    scanf("%d",&item);
    int result=binarysearch(arr,item,low,high);
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found");
    }
}

int binarysearch(int arr[],int item,int low,int high)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==item)
        {
            return mid;
        }
        if(arr[mid] < item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
=======
#include<stdio.h>

int binarysearch(int arr[],int,int,int);

int main()
{
    int arr[100],size,i,j,temp,low=0,item;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int high = size - 1;
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    printf("Enter the item you want to search\n");
    scanf("%d",&item);
    int result=binarysearch(arr,item,low,high);
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found");
    }
}

int binarysearch(int arr[],int item,int low,int high)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==item)
        {
            return mid;
        }
        if(arr[mid] < item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
>>>>>>> ad42450dbfa4a1d3e79cfb630e87a46151ba50eb
}