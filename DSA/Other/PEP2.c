#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number till which you want to get the even numbers\n");
    scanf("%d",&num);
    for(int i=2;i<=num;i+=2)
    {
        printf("The number is %d\n",i);
    }
}