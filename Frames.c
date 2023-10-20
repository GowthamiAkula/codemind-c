#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p=2*a+2*b;
    int cost=p*c;
    printf("%d",cost);
    return 0;
}