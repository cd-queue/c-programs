#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, big;

    printf("Enter four numbers:");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    big = num1;

    if (num2 > big)
    {
        big = num2;
    }
   
    if (num3 > big)
    {
        big = num3;
    }
   
    if (num4 > big)
    {
        big = num4;
    }
   
    printf("the greatest number is: %d", big);

    return 0;
}