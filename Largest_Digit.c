#include<stdio.h>
int main()
{
    int n,l=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        if(a>l)
        {
            l=a;
        }
        
        n=n/10;
    }
    printf("%d",l);
}