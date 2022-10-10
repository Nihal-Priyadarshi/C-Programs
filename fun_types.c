//Programs of types of functions

/**********NO ARG & NO RETURN VALUE***********/
#include<stdio.h>
fun1();
int main()
{
   fun1();
   return 0;
}
fun1()
{
    int a=3,b=5,sum;

    sum=a+b;
    printf("Addition is %d",sum);
    return 0;
}

/**********WITH ARG & NO RETURN VALUE***********/

#include<stdio.h>
fun1(int);
int main()
{
   int a;
   fun1(a);
   return 0;
}
fun1(a)
{
    int x=2,y=6,dif;

    dif=y-x;
    printf("Diff is %d",dif);
    return 0;
}

/**********WITH NO ARG & RETURN VALUE***********/

#include<stdio.h>
int fun1();
int main()
{
   int a;
   printf("Mul is %d",fun1());
   return 0;
}
int fun1()
{
    int w=10,m=3,mul;

    mul=w*m;
    return mul;
}

/**********WITH ARG & RETURN VALUE***********/

#include<stdio.h>
int fun1(int,int);
int main()
{
   int a,b;
   printf("Div is %d",fun1( a, b));
   return 0;
}
int fun1(int a,int b)
{
    int q=300,r=30,div;

    div=q/r;
    return div;
}
