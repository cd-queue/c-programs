#include <stdio.h>
int main()
{
    char *ptr = "ajahar";

    printf("%s\n", ptr);

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        printf("character at index %d: %c\n", i, ptr[i]);
    }

    return 0;
}