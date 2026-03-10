#include <stdio.h>
struct employee
{
    int code;
};

int main()
{
    struct employee a;
    struct employee *ptr = &a;

    ptr->code = 56;

    printf("the code is %d", ptr->code);

    return 0;
}