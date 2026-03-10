#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    
    ptr = (int *) calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", ptr[i]);
    }
    
    printf("\nIn array!");
    
    n = 10;
    
    ptr = realloc(ptr, n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    
    printf("\nIn realloc!");

    return 0;
}