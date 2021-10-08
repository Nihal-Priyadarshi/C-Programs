#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,an;
    printf("enter first number of GP ");
    scanf("%d",&a);
    printf("enter number of terms of GP ");
    scanf("%d",&b);
    printf("enter the common multiple  ");
    scanf("%d",&c);
    an=(a)*pow(c,b-1);
    if(c<1)
    {

       d=a*(1-pow(c,b+1)-1)/(c-1);
       printf("\n the sum of the sequence is %d  ",d);
       for(i=a;i<=an;i=i*c)
    {

       printf(".%d",i);

    }


    }

    else if (c>1)
    {
       d=a*(1-pow(c,b+1)/(1-c));
       printf("\n the sum of the sequence is %d  ",d);
       for(i=a;i<=an;i=i*c)
    {

       printf(".%d",i);

    }
    }

    else

    {
        printf("request is invalid");
    }

        printf("\n last terms is :%d",an);

     return 0;

    }
