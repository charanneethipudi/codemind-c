#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    n=a%2;
    if(n==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}