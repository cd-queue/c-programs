#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("ajahar.txt", "w");
    //char c = fgetc(ptr); //used to read a character from file
    //printf("%c", c);

    fputc('c', ptr); //used to put a character.


    return 0;

}