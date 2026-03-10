#include <stdio.h>

int factorial(int a);

int factorial(int a)
{
    if(a == 0)//base condition
    return 1;
    else
    return a * factorial (a - 1);//formula
}
int main()
{
    int a = 4;

    printf("the factorial of %d is: %d", a, factorial(a));

    return 0;
}
