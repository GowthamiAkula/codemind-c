#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int L=cp-sp;
    float lp=L*100.0/cp;
    printf("%.2f",lp);
    return 0;
}