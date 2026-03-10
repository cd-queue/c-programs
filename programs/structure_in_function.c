#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e);

void show(struct employee e)
{

    printf("code = %d\nsalary = %.2f\nname = %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 1005;
    e1.salary = 78.6;
    strcpy(e1.name, "Ajahar");

    show(e1);

    return 0;
}
