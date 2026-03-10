#include <stdio.h>
int main()
{
    FILE *ptr;
    char name1[30], name2[30];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    printf("Enter name:");
    scanf("%s", name1);
    printf("Enter salary: ");
    scanf("%d", &salary1);

    printf("Enter name:");
    scanf("%s", name2);
    printf("Enter salary: ");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d\n", salary1);
    

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);

    return 0;
}