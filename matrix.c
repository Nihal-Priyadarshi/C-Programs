#include<stdio.h>
int main()
{
  char operator;
  scanf("%c", &operator);
  float  a,b;
  printf("Enter the numebr a and b\n");
  scanf("%f%f", &a,&b);
  switch(operator)
 { case '+':
  {printf("The result is %f\n",a+b);
  break;}
  case '-':
  {
    printf("The result is %f",a-b);
    break;

  }
  case'*':
  {
    printf("The result is %f\n", a*b);
    break;
  }
  case '/':
  {
    printf("The result is %f\n",a/b);
    break;
  }
  default:
  {
    printf("Please enter a correct input\n");

  }
  return 0;
  }

}
