#include <stdio.h>
 int fib (int n)
 {
     if (n==1 || n==2)
     {
         return n-1;
     }
     
     else 
     return fib(n-1) + fib(n-2);
 }
 
 int main ()
 {
     int x;
     printf ("Enter the position number you want to have of fibonacci series: \n");
     scanf ("%d", &x);
     printf ("The %d placed member of fibonacci series is %d", x, fib(x));
     
 }