#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("ajahar.txt", "a");
    int num = 446;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}