#include<stdio.h>
int main()
{
    int n,i=1,a;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
       a=n*i;
        printf("%d x %d = %d
",n,i,a);
    }
}