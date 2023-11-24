#include<stdio.h>
int main()
{
    int n,a,sum=0,fact=1;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        fact=fact*a;
        n=n/10;
    }
    if(sum==fact)
    {
        
    
    printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}