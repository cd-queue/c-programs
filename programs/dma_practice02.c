#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", ptr[i]);
    }
    return 0;
}