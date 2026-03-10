#include <stdio.h>
int main()
{
    //char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; //same as 1st line
    /*for (int i = 0; i < 3; i++)
    {
        printf("character is: %c\n", st[i]);
    }*/
    printf("%s", st);
    return 0;
}