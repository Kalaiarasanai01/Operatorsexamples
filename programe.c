#include<stdio.h>
int main()
{
    int a;
    printf("enter value A");
    scanf("%d",&a);
    if (a>=0)
    {
    printf("Given value is positive");
    }
    else if (a<0)
    {
    printf("given value is negative");
    }
    return 0;
}