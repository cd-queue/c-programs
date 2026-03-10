#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("ajahar.txt", "r");
    ptr2 = fopen("ajahar3.txt", "a");

    while (1)
    {
        //when all the file content of file has been read break.
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%C", ch);
            fprintf(ptr2, "%C", ch);
            printf("%c", ch);
        }
    }
    return 0;
}