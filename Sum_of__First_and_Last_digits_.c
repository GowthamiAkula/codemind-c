#include<stdio.h>
int main()
{
    int n,firstdigit,lastdigit,sum;
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>=10)
    {
    n/=10;
    }
    firstdigit=n;
    sum=lastdigit + firstdigit;
    printf("%d",sum);
    return 0;
}