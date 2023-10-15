#include<stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
    int M=(A+B+C+D+E)/5;
    if(M>=90)
    {
        printf("Grade A");
    }
    else if(M>=80)
    {
        printf("Grade B");
    }
    else if(M>=70)
    {
        printf("Grade C");
    }
    else if(M>=60)
    {
        printf("Grade D");
    }
    else if(M>=40)
    {
        printf("Grade E");
    }
    else if(M<40)
    {
        printf("Grade F");
    }
}