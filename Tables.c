#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
	{
		b=i%2;
        if(b!=0)
		{
        printf("%d x %d = %d
",a,i,i*a);
        }
    }
}