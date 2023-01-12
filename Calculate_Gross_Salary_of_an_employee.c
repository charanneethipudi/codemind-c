#include<stdio.h>
int main()
{
    float pf,hra,da,b,g;
    scanf("%f%f%f",&b,&hra,&da);
    pf=(b*0.12);
    g=b+hra+da+pf;
    printf("%.2f
%.2f",pf,g);
}