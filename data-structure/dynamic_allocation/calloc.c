#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    int ptr = NULL;
    int size = 5;
    int i;

    ptr = (int*)calloc(size, sizeof(int));
    assert(ptr != NULL);

    for(i = 0; i < 5; i++)
    {
        ptr[i] = (i + 1)*5;
        printf("ptr[%d] : %d", i, *ptr);
    }

    free(ptr);
    return(0);
}