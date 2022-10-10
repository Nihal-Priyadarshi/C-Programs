#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr = NULL;

    ptr = (int*)malloc(sizeof(int));
    assert(ptr != NULL);

    *ptr = 100;

    free(ptr);
    return(0);
}