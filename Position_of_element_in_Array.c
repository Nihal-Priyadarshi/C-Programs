#include<stdio.h>
int main() {
   int n, i, r, arr[100];
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
 
   printf("Enter the elements in array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
 
   printf("Enter the item to be searched: ");
   scanf("%d", &r);
   i = 0;
   while (r != arr[i]) {
      i++;
   }
 
   if (i < n) {
      printf("The element is found at the position = %d", (i + 1));
   } 
   
   else {
      printf("Element not found!");
   }
   return 0;
}
