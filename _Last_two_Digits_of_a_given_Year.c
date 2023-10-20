#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    int p=year%100;
    printf("%.2d",p);
    return 0;
}