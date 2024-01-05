#include<stdio.h>
int main()
{
    int a ;
    int b;
    int c;
    int d;
    int e;
    int f;

    printf ("enter how many values");
    scanf ("%d",&f);
    if(f==2)
    {
        printf ("enter value of A:");
        scanf("%d",&a);
         printf ("enter value of B:");
        scanf("%d",&b);
        printf("enter the operator");
        scanf("%d",&e);
        switch(e)
        {
            case 1:
            d=a+b;
            printf("the added value of a and b is :%d",d);
            break;
            case 2:
            d = a-b;
            printf("the subract value of a and b is:%d",d);
            break;
            case 3:
            d =a*b;
             printf("the multiply value of a and b is:%d",d);
             break;
        }
    }
    else
    {
printf("enter the value of A:");
scanf("%d",&a);
printf("enter the value of B:");
scanf("%d",&b);
printf("enter the value of C:");
scanf("%d",&c);
printf("enter the operator :");
scanf("%d",&e);
switch (e)
{
    case 1:
    d=a+b+c;
    printf("added value of a and b is:%d",d);
    break;
    case 2:
    d=a-b-c;
    printf("subract value of a and b is:%d",d);
    break;
    case 3:
    d=a*b*c;
    printf("multiplication value of a and b is:%d",d);
    break;
}
    }
 return 0;

}