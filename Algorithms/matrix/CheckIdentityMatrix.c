#include<stdio.h>
int identity(int num){
   int row, col;
   for (row = 0; row < num; row++){
      for (col = 0; col < num; col++){
         if (row == col)
            printf("%d ", 1);
         else
            printf("%d ", 0);
      }
      printf("\n");
   }
   return 0;
}
int main(){
   int size = 4;
   identity(size);
   return 0;
}
