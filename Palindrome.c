//A number or a word or a phrase if read backwards gives the same number or a word or a phrase at it is begin read forward.
//Example: 1221, racecar,24542 etc.
#include<stdio.h>
#include<conio.h>
int main()
{
  int rem,res,quo,num;
  printf("Enter the number:");
  scanf("%d",&num);
  quo=num;
  for(res=0;quo!=0;)
  {
    rem=quo%10;
    quo=quo/10;
    res=res*10+rem;
  }
  if(res==num)
    printf("\nThe entered number is a palindrome");
  else
    printf("\nThe entered number is not a palindrome");
  getch();
}
