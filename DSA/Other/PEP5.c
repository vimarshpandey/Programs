#include<stdio.h>
int main()
{
    int s,y,nb=0;
    printf("Enter your salary\n");
    scanf("%d",&s);
    printf("Enter your years of service\n");
    scanf("%d",&y);
    if(y>10)
    {
        nb=1.1*s;
    }
    else if(y>=6 && y<=10)
    {
        nb=1.08*s;
    }
    else if(y<6 && y>0)
    {
        nb=1.05*s;
    }
    else
    {
        printf("Invalid Input\n");
    }
    printf("The net bonus is %d",nb);
}