//A neon number is a number where the sum of digits of the square of the number is equal to the number. 
#include<stdio.h>
int main(){
  int n,sqr,sum=0;
  //Take input from the user
  printf("ENTER THE NUMBER\n");
  scanf("%d",&n);
  //Squaring the number
  sqr=n*n;
  //Find the sum of digits of the square of the number
  while(sqr!=0){
    int d=sqr%10;
    sum+=d;
    sqr/=10;
  }
  if(sum==n)
    printf("%d is a Neon Number",n);
  else
    printf("%d is not a Neon Number",n);
  return 0;
}
