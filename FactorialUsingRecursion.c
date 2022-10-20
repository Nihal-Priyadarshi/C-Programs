#include<stdio.h>
int fact(int n);
int fact(int n){
  if(n<=0) return 1;
  else return n*fact(n-1);
}
int main(){
  int n;
  
  printf("ENTER NUMBER:\n");
  scanf("%d",&n);
  
  printf("FACTORIAL IS : %d",fact(n));
  return 0;
}
