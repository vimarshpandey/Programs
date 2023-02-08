#include<stdio.h>
int main()
{
    int num;
    printf("Enter the marks of the student\n");
    scanf("%d",&num);
    if(num>=90 && num<=100)
    {
        printf("Excellent Performance\n");
    }
    else if(num>=80 && num<90)
    {
        printf("Very Good Performance\n");
    }
    else if(num>=70 && num<80)
    {
        printf("Good Performance\n");
    }
    else if(num>=60 && num<70)
    {
        printf("Average Performance\n");
    }
    else if(num<=50 && num>=0)
    {
        printf("Poor Performance\n");
    }
    else
    {
        printf("Invalid input");
    }
}