#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        c=n*i;
        printf("%d x %d = %d
",n,i,c);
    }
    
}