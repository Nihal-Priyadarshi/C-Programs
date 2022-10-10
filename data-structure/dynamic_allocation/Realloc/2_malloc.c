#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
	int* ptr = NULL;
	
	ptr = (int*)malloc(sizeof(int));
	assert(ptr != NULL);

	*ptr = 200;

	free(ptr);
	return 0;
}
