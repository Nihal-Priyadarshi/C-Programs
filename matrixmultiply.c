// Program to find matrix multiplication
#include <stdio.h>
int main()
{
    int c[3][3], i[3][3], j = 0, d, e, f;
    printf("Enter the first matrix\n");
    for (d = 0; d < 3; d++)
    {
        for (e = 0; e < 3; e++)

        {
            scanf("%d", &c[d][e]);
        }
    }

    printf("Enter the second matrix\n");
    for (d = 0; d < 3; d++)
    {
        for (e = 0; e < 3; e++)
        {
            scanf("%d", &i[d][e]);
        }
    }
    printf("So your first matrix is\n");
    for (d = 0; d < 3; d++)
    {
        for (e = 0; e < 3; e++)
        {
            printf("%d\t", c[d][e]);
        }
        printf("\n");
    }
    printf("And your second matrix is \n");
    for (d = 0; d < 3; d++)
    {
        for (e = 0; e < 3; e++)
        {
            printf("%d\t", i[d][e]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Press one to confirm it or press 0 to terminate it\n");
    scanf("%d", &f);
    if (f == 1)
    {
        printf("So your answer is \n");
        for (d = 0; d < 3; d++)
        {
            for (e = 0; e < 3; e++)
            {
                for (f = 0; f < 3; f++)
                {

                    j = j + (c[d][e] * i[f][e]);
                }

                c[d][e] = j;
                printf("%d\t", c[d][e]);
                j = 0;
            }
            printf("\n");
        }
    }
    return 0;
}