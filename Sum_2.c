#include<stdio.h>
int main()
{
    int a,n,b,c,i,s=0;
    scanf("%d%d%d%d",&a,&n,&b,&c);
    for(i=a;i<=n;i++)
    {
        if((i%b==0)&&(i%c!=0))
        {
            s=s+i;
        }
    }
    printf("%d",s);
}