
#include<stdio.h>
int main()
{
    int i,b,j,r,temp;
    long long fact,sum;
    printf("enter limit number: ");
            scanf("%d",&b);
 /* printf("enter the last number upto which you want print the series: ");
    scanf("%d",&b);
/*   if(a>b)
    {
        b=a;
    } */
    for(i=1;i<=b;i++)
    {
        temp=i;
        sum=0;
      // temp=a;
        while(temp>0)
        {
            fact=1ll;
            r=temp%10;
            for(j=r;j>=1;j--)
            {
             fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;
        }
       // a=temp;
        if(sum==i)
        {
            printf("%d, ",i);
        }
    }
    return 0;

}

