//Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself.
//Ex: 6 is a perfect number

#include<stdio.h>
#include<conio.h>
int main(){
  int number;
  printf("Enter the number:");
  scanf("%d",&number);
  int i,rem,sum=0;
  for(i=1;i<number;i++){
    rem=number%i;
    if(rem==0){
      sum=sum+i;
    }
  }
  if(sum==number)
    printf("%d is a perfect number",number);
  else
    printf("%d is not a perfect number",number);
  return 0;
}
