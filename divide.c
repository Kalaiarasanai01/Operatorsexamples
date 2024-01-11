#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter the value : ");
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    {
        for(c=1;c<=10;c++)
        printf("%d/%d=%f\n",b,c,d=(float) b/c);
        printf("!!!!!!!!!\n");
        
    }
    return 0;

}
   