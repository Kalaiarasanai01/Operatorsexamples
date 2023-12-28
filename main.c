#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    int b = 25;
    int c;
    int d = 22;
    int e = 21;
    int f = 10;


    additionprogram(a,b);
    subtractionprogram(a,b);
    multiplyprogram(a,b);
    Dividedprogram(a,b);
    modulus(a,b);
    increementprogram(a);
    decreementprogram(a);
    logicalprogram(a,b);
    assignmentprogram(a,b,c,d,e,f);
    comparision(a,b,d,e);

    return 0;
}
int additionprogram(int a,int b)
{
  int  c=a+b;
    printf("\n Addition \n Addition prog value : %d\n",c);
}
int subtractionprogram(int a, int b)
{
    int c=a-b;
    printf("\n Subtraction \n Subtraction prog value : %d\n",c);
}
int multiplyprogram(int a, int b)
{
    int c=a*b;
    printf("\n Multiply \n Multiply prog value : %d\n",c);
}
int Dividedprogram(int a, int b)
{
    int c= 30/10;
    printf("\n Divided \n Divided prog value : %d\n",c);
}
int modulus (int a, int b)
{
    int c=a%b;
    printf ("\n modulus \n modulus prog value : %d\n ",c);
}
int increementprogram (int a)
{
    a++;
    printf ("\n icreementprogram \n increementprogram prog value : %d\n ",a);
}
int decreementprogram(int a)
{
    a--;
    printf ("\n decreementprogram \n decreementprogramvalue : %d\n ",a);
}

int logicalprogram(int a, int b)
{
    printf("\n Logical program \n logicalprogram value && : %d\n", a>15 && a<20);
    printf("\n Logical program \n logicalprogram value || :%d\n", a>25 || a<30);
    printf("\n Logical program \n logicalprogram value  ! : %d\n", !(a>25 || a<30));

}
int assignmentprogram(int a,int b, int c, int d,int e,int f)
{

    e+= d;
    printf("\n assignmentprogram e+: %d\n",e);
    c = b;
    f-= a;
    e-=d;


  printf("\n assignmentprogram \n assignmentprogram c : %d\n assignmentprogram f- : %d\n assignmentprogram e- :%d\n ",c,f,e);

}
int comparision(int a, int b, int d, int e )
{
 a==b;
 d!=e;
printf("\n comparision \n value of comparision : %d\n comparision : %d\n",d!=e,a==b);
}
