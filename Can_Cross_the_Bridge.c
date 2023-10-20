#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    // z=y+(A*x)
    int A=(z-y)/x;
    printf("%d",A);
    return 0;
}