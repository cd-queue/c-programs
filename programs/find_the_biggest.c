#include <stdio.h>
int main()
{
    int a, b, c, big;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    big = a;

    if (b > big)
    {
        big = b;
    }

    if (c > big)
    {
        big = c;
    }

    printf("The biggest is: %d", big);

    return 0;
}