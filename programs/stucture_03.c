#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 77.5;
    strcpy(facebook[0].name, "ajahar");

    facebook[1].code = 101;
    facebook[1].salary = 76.5;
    strcpy(facebook[1].name, "Muktar");

    facebook[2].code = 102;
    facebook[2].salary = 78.5;
    strcpy(facebook[2].name, "Barni");

    printf("The code = %d salary = %.2f  Name = %s\n", facebook[0].code, facebook[0].salary, facebook[0].name);
    printf("The code = %d salary = %.2f  Name = %s\n", facebook[1].code, facebook[1].salary, facebook[1].name);
    printf("The code = %d salary = %.2f  Name = %s\n", facebook[2].code, facebook[2].salary, facebook[2].name);

    //another mathod
    /*struct employee ajahar = {100, 78.5, "ajahar"};
    printf("%d %.2f %s", ajahar.code, ajahar.salary, ajahar.name);*/


    return 0;
}
