#include <stdio.h>
#include <string.h>

struct employee
{
int code; //This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "ajahar");
    e1.salary = 54.44;
    
    e2.code = 5511;
    strcpy(e2.name, "hacker");
    e2.salary = 67.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", e2.code, e2.salary, e2.name);

    return 0;
    
}