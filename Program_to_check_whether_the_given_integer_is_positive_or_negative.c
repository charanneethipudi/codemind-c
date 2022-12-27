#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=-1000 && n<1)
    {
        printf("Negative Number");
    }
    else if(n<=1000)
    {
        printf("Positive Number");
    }
}