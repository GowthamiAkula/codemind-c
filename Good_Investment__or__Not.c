#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(2*Y<=X)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
        return 0;
    }
}