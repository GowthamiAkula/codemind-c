#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int a=x2-x1,b=y2-y1;
    scanf("%d%d",&a,&b);
    float dis=sqrt(a*a+b*b);
    printf("%.4f",dis);
    return 0;
}