#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    for(int i=n;i>=m;i--)
    {
        printf("%d ",i);
    }
}