#include<stdio.h>
int main()
{
    int arr[7]={1,3,4,5,4,3,1};
    int sl=0,sr=0,l=6;
    for(int i=0;i<4;i++)
    {
        sl=sl+arr[i];
        sr=sr+arr[l];
        l--;
        if(sl==sr)
        {
            printf("Equilibrium Found and element is %d",arr[l-2]);
            break;
        }
    }
}