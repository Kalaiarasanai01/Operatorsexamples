#include<stdio.h>
int main()
{
    int a;
    int b=2;
    int c;
    printf("enter the value A");
    scanf("%d",&a);
    c=a%b;
    if (c==0)
    {
        printf("the given value is even");
    }
    else    
    {
        printf("the given value is odd");
    
    }
    return 0;

}