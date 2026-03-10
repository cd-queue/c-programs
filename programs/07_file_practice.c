#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "w");
    int num = 4;
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d x %d = %d", num, i, num * (i + 1));
        fprintf(fptr, "%c", '\n');
    }
    fclose(fptr);
    return 0;
}