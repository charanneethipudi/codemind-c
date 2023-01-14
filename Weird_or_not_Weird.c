#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a%2;
    if (b!=0)
    {
        printf("weird");
    }
    else if(b=0&&a<5||a<=2)
    {
        printf("NOT Weird");
    }
    else if (b=0&&a<=20||a>=6)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}