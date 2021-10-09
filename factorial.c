#include<stdio.h>
int main(){
int num;
printf("enter number:");
scanf("%d",&num);
int ans=fact(num);
printf("the factorial of %d is:%d",num,ans);
}
int fact(int num){
if(num==0){
return 1;
}
if(num==1){
return 1;
}
else{
return num*fact(num-1);
}
}
