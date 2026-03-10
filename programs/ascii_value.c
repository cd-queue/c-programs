#include <stdio.h>
int main()
{
    char ch='a';
    printf("the character is: %c\n",ch);
    printf("The value of character is: %d\n",ch);

    if(ch>=97 && ch<=122)
    {
        printf("character %c is a lowercase\n",ch);
    }
    else{
        printf(" character %c is uppercase\n",ch);
    }
    return 0;
}