//A program to print the magic square
/*
Conditions to check
1. The position of next number is calculated by decrementing row number of previous number by 1, and incrementing the column number of previous number by 1. At any time, if the calculated row position becomes -1, it will wrap around to n-1. Similarly, if the calculated column position becomes n, it will wrap around to 0.

2. If the magic square already contains a number at the calculated position, calculated column position will be decremented by 2, and calculated row position will be incremented by 1.

3. If the calculated row position is -1 & calculated column position is n, the new position would be: (0, n-2).*/ 
#include<stdio.h>
int main()
{
    int n,sum,m[50][50],val=0;
    printf("Enter the size odd number only"); 
    scanf("%d",&n);
    int i = n/2; 
    int j = n-1; 
  
    // One by one put all values in magic square 
    for (int num=1; num <= n*n; ) 
    { 
        if (i==-1 && j==n) //3rd condition 
        { 
            j = n-2; 
            i = 0; 
        } 
        else
        { 
            // 1st condition helper if next number  
            // goes to out of square's right side 
            if (j == n) 
                j = 0; 
  
            // 1st condition helper if next number  
            // is goes to out of square's upper side 
            if (i < 0) 
                i=n-1; 
        } 
        if (m[i][j]) //2nd condition 
        { 
            j -= 2; 
            i++; 
            continue; 
        } 
        else
            m[i][j] = num++; //set number 
  
        j++; i--; //1st condition 
    } 
  
    // Print magic square 
    printf("The Magic Square for n=%d:\nSum of "
       "each row or column %d:\n\n",  n, n*(n*n+1)/2); 
    for (i=0; i<n; i++) 
    { 
        for (j=0; j<n; j++) 
            printf("%3d ", m[i][j]); 
        printf("\n"); 
    } 
}