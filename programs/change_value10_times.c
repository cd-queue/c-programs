#include <stdio.h>

void pass_the_address(int* ptr);

void pass_the_address(int* ptr)
{

    *ptr = *ptr * 10;
     printf("value = %d", *ptr);
}

int main()
{
    int i = 4;
    pass_the_address(&i);
    return 0;
}