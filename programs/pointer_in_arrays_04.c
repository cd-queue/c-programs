#include <stdio.h>
int main()
{
    int marks[] = {55, 22, 9, 55};
    int *ptr = &marks[0]; //simple way just tipe marks for first element...
    for(int i = 0; i < 4; i++)
    {
        printf("The marks at intdex %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}