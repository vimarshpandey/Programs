#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
}