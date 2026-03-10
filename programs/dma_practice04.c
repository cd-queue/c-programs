#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    int n1 = 7;

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("%d x %d = %d\n", n1, i + 1, ptr[i]);
    }
    printf("After realloc!\n");

    n = 15;

    ptr = realloc(ptr, n);

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("%d x %d = %d\n", n1, i + 1, ptr[i]);
    }

    return 0;
}