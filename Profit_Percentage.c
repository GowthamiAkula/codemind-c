#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int p=sp-cp;
    float pp=p*100.0/cp;
    printf("%.2f",pp);
    return 0;
    
    
}