#include <stdio.h>
int main()
{
    int marks[5];

    printf("Enter 5 students marks:\n");
    /*scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);*/

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("The address of index %d is: %u\n", i, &marks[i]);
    }

    return 0;

}