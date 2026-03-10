#include <stdio.h>
int main()
{
    int i = 5;
    int* ptr = &i;

    printf("The adress of a variable is: %p\n", &i);

    printf("The value of the variable is: %d\n",*ptr);

    return 0;
}