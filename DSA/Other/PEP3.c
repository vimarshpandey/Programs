#include<stdio.h>
int main()
{
    int num,c;
    printf("Enter the number you want to check\n");
    scanf("%d",&num);
    if(num<2)
    {
        c=1;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    {
        printf("It is not prime number");
    }
    else
    {
        printf("It is prime number");
    }
}