#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],merge[100],size1,size2,index=0;
    printf("Enter the size of first array;\n");
    scanf("%d",&size1);
    printf("Enter the %d elements of first array:\n",size1);
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array;\n");
    scanf("%d",&size2);
    printf("Enter the %d elements of first array:\n",size2);
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size1;i++)
    {
        merge[index]=arr1[i];
        index++;
    }
    for(int i=0;i<size2;i++)
    {
        merge[index]=arr2[i];
        index++;
    }
    printf("First array:\n");
    for(int i=0;i<size1;i++)
    {
        printf("arr1[%d]=%d\n",i,arr1[i]);
    }
    printf("Second array:\n");
    for(int i=0;i<size2;i++)
    {
        printf("arr2[%d]=%d\n",i,arr2[i]);
    }
    printf("After merging:\n");
    for(int i=0;i<(size1+size2);i++)
    {
    printf("merge[%d]=%d\n",i,merge[i]);
    }
}