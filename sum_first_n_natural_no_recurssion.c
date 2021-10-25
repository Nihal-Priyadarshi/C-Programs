#include <stdio.h>

int n_natural_sum(int n);

int main(int argc, char const *argv[])
{
    int n, sum;
    printf("Enter the value of n    ");
    scanf("%d", &n);
    sum = n_natural_sum(n);
    printf("Sum of first n natural numbers is:    %d", sum);
    return 0;
}

int n_natural_sum(int n)
{
    int sum = 0;
    if (n == 1)
    {
        sum += 1;
        return sum;
    }
    else
    {
        sum += n_natural_sum(n - 1) + n;
    }
    return sum;
}