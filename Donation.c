#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(Y-X)
    {
        printf("%d",Y-X);
    }
    else
    {
        printf("%d",X-Y);
        return 0;
    }
}