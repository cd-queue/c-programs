#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{

    return x+y;
}

int main()
{
    int a = 5;
    int b = 2;

    int c = sum(a,b);
    printf("%d\n", c);


    int a1 = 5;
    int b1 = 5;

    int c1 = sum(a1, b1);
    printf("%d\n", c1);

    int a2 = 8;
    int b2 = 4;

    int c2 = sum(a2, b2);
    printf("%d\n", c2);

}