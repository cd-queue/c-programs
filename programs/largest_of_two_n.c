#include <stdio.h>
int main()
{
    int a, b, largest;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    printf("largest is: %d\n", largest);
    return 0;
}