#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the number to write table for \n");
    scanf("%d", &n);
    printf("\n");
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
