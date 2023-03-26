#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    void temperature()
    {
        int temp,farh;
        printf("Enter the temperature in celcius\n");
        scanf("%d",&temp);
        farh=(temp*9/5)+32;
        printf("The temperature in farehnite is %d",farh);
    }
    temperature();
    void amstrong()
    {
        int a;
        printf("\nEnter the number\n");
        scanf("%d",&a);
        int b=a,c=0,s=0;
        while(b>0)
        {
            c=b%10;
            b=b/10;
            s+=c*c*c;
        }
        if(s==a)
        {
            printf("%d is amstrong",a);
        }
        else
        {
            printf("%d is not amstrong",a);
        }
    }
    amstrong();
    void fibo()
    {
        int n=0;
        printf("\nEnter the number\n");
        scanf("%d",&n);
        int a=0,b=1,c=0;
        if(n>=1)
        {
            printf("0 ");
        }
        if(n>=2)
        {
            printf("1 ");
        }
        if(n<=0)
        {
            printf("wrong input");
            exit(0);
        }
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
        }
    }
    fibo();
    void sici()
    {
        int p,r,t,si,ci;
        printf("\nEnter the principal amount\n");
        scanf("%d",&p);
        printf("Enter the time period\n");
        scanf("%d",&t);
        printf("Enter the interest rate\n");
        scanf("%d",&r);
        si=(p*r*t)/100;
        printf("The simple interest is %d\n",si);
        ci=p*pow((1+(r/t)),t);
        printf("The compound interest is %d",ci);
    }
    sici();
}