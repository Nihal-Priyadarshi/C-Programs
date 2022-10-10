#include <stdio.h>
#include <stdlib.h>

void f_1(int* p);
void f_2(int* p);

int main(void)
{
    int* num_p = 0;

    num_p = malloc(sizeof(int));

    if(num_p == 0)
    {
        puts("Memory Allocation Failed!!");
        exit(-1);
    }

    *num_p = 100;

    printf("Memory location in num_p before call to function: %llu\n", (unsigned long long)num_p);
    printf("Value in memory location before calling to function : %d\n\n", *num_p);

    f_1(num_p);

    printf("Memory location in num_p after call to function_1 : %llu\n", (unsigned long long)num_p);
    printf("Value in memory location after calling to function_1 : %d\n\n", *num_p);

    f_2(num_p);

    printf("Memory location in num_p after call to function_2 : %llu\n", (unsigned long long)num_p);
    printf("Value in memory location after calling to function_2 : %d\n\n", *num_p);

    exit(0);
}

void f_1(int* p)
{
    *p = 123;
}

void f_2(int* p)
{
    *p = 432;
}