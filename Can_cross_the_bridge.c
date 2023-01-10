#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,tn;
    scanf("%d%d%d",&x,&y,&z);
    tn=trunc((z-y)/x);
    printf("%d",tn);
}