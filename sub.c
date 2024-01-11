#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value : ");
    scanf("%d",&a);
    printf("Subtraction table upto %d\n",a);
    for (b=1;b<=a;b++)
    {
        for (c=1;c<=10;c++)
        printf("%d-%d=%d\n",b,c,c-b);
        printf("-*-*-*-*-*-*\n");
        
    }
    return 0;
}