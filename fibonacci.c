#include<stdio.h>
int main()
{
    int n,first=0,second=1,next,i;
    scanf("%d%d%d",&n,&first,&second);
    for(i=1;i<=n;i++)
    {
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
    }
}