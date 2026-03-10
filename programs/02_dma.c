#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    
    ptr [0] = 2;
    printf("%d", ptr[0]);
    ptr = realloc(ptr, 4);
    ptr[0] = 5;
    ptr[1] = 5;
    ptr[2] = 5;
    ptr[3] = 5;
    printf("%d", ptr[0]);
    printf("%d", ptr[1]);
    printf("%d", ptr[2]);
    printf("%d", ptr[3]);
    
    return 0;
}
