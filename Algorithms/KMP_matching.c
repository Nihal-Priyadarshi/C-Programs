#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void KMP(const char *mainstr, const char *pattern, int m, int n)
{
    if (*pattern == '\0' || n == 0)
    {
        printf("The pattern found at index  0");
    }

    if (*mainstr == '\0' || n > m)
    {
        printf("Pattern not found");
    }

    int next[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        next[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];

        while (j > 0 && pattern[j] != pattern[i])
        {
            j = next[j];
        }

        if (j > 0 || pattern[j] == pattern[i])
        {
            next[i + 1] = j + 1;
        }
    }

    for (int i = 0, j = 0; i < m; i++)
    {
        if (*(mainstr + i) == *(pattern + j))
        {
            if (++j == n)
            {
                printf("The pattern occurs with shift %d\n", i - j + 1);
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--;
        }
    }
}

int main(void)
{
    char *text = "HACKTOBERHACKHACK";
    char *pattern = "HACK";

    int n = strlen(text);
    int m = strlen(pattern);

    KMP(text, pattern, n, m);

    return 0;
}