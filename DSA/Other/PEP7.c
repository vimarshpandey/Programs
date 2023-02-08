#include<stdio.h>
int main()
{
    int repeat=0,miss=0;
    int arr[6]={1,2,3,4,4,6};
    for(int i=0;i<6;i++)
    {
        if(arr[i]==arr[i+1])
        {
            repeat=arr[i];
        }
        if(arr[i+1]-arr[i] != 1)
        {
            miss=i;
        }
    }
    printf("The repeating element is %d \nThe missing element is %d",repeat,miss);
}