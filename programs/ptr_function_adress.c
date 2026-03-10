#include <stdio.h>
int return_5(int* ptr);
int return_5(int* ptr)
{
    printf("The address of ptr is: %d\n", ptr);
    printf("The value at address ptr is: %d\n", *ptr);

    return 5;
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("The address of i is: %u\n", &i);
    return_5(ptr);

    return 0;
}