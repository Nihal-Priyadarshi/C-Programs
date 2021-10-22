#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int max(int a, int b)
{
return (a > b)? a : b;
}


void lcs( char *X, char *Y, int m, int n )
{
int L[m+1][n+1],i,j;

//build L[m+1][n+1] in bottom up fashion
for (i=0; i<=m; i++)
{
for (j=0; j<=n; j++)
{
if (i == 0 || j == 0)
L[i][j] = 0;
else if (X[i-1] == Y[j-1])
L[i][j] = L[i-1][j-1] + 1;
else
L[i][j] = max(L[i-1][j], L[i][j-1]);
}
}


int index = L[m][n];

char lcs[index+1];
lcs[index] = '\0'; 

// Start from the right-most-bottom-most corner and store characters in lcs[]
int a = m, b = n;
while (a > 0 && b > 0)
{
// If current character in X[] and Y are same, then
// current character is part of LCS
if (X[a-1] == Y[b-1])
{
lcs[index-1] = X[a-1]; 
a--; b--; index--; // reduce values of i, j and index
}


//find larger go, in its direction
else if (L[a-1][b] > L[a][b-1])
a--;
else
b--;
}


printf("LCS of ");
for(i=0; i<strlen(X);i++)
{
printf("%c",X[i]);
}
printf(" And ");
for(i=0; i<strlen(Y);i++)
{
printf("%c",Y[i]);
}
printf(" is :\n");
for(i=0; i<strlen(lcs);i++)
{
printf("%c",lcs[i]);
}



}


int main()
{

 char X[20],Y[20];
 
   printf("Enter X: ");
    scanf("%[^\n]", &X);
    fflush(stdin);
 
   printf("Enter Y: ");
    scanf("%[^\n]", &Y);


int m = strlen(X);
int n = strlen(Y);
lcs(X, Y, m, n);
return 0;
}
