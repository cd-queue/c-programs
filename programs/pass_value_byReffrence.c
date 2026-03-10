#include <stdio.h>

void pass_by_reference(int *a);

void pass_by_reference(int *a)
{
     printf("the value of reference is: %d", *a);
}

int main()
{
    int i = 2;
    pass_by_reference(&i);

    return 0;
}