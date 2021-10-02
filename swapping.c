#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
int main()
{
    int a,b;
    printf ("Enter the first number ");
    scanf ("%d", &a);

    printf ("Enter the first number ");
    scanf ("%d", &b);

    printf ("The swapped numbers are: %d, %d", (a+b)-a, (a+b)-b);
    return 0;
}