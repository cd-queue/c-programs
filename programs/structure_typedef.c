#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;
    e1.code = 1005;
    e1.salary = 7.5;
    strcpy(e1.name, "ajahar");

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", ptr->code, ptr->salary, ptr->name);

    return 0;
}