#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 1002;
    struct employee *ptr;
    ptr = &e1;

    //printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code); //exactly same as (*ptr).code

    return 0;
}