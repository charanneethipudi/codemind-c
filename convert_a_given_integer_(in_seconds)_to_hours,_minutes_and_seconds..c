#include <stdio.h>
int main()
{
    int S,h,m,s;
    scanf("%d",&S);
    h=(S/3600);
    m=(S-(3600*h))/60;
    s=(S-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d
",h,m,s);
}