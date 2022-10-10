//A program to convert Binary to Decimal

#include<stdio.h>
int main(){
  int decimal =0,binary,base=1,rem,num;
  printf("Enter the binary number:");
  scanf("%d",&binary);
  num=binary;
  while(binary!=0){
    rem=binary%10;
    decimal=decimal +rem*base;
    binary=binary/10;
    base=base*2;
  }
  printf("Decimal equivalent of the binary number %d is : %d",num,decimal);
  return 0;
}
