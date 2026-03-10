#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("before swapping a is: %d and b is: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after swapping the value of a is: %d and the value of b is: %d\n", a, b);

    return 0;
}