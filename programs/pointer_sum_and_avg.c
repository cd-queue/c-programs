#include <stdio.h>
int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("The sum of two numbers is:%d\n", s);
    return ptr;
}
float *avarage(int i, int j)
{
    float avg = (i + j) / 2;
    float *ptr = &avg;
    printf("The avarage of two numbers is:%f\n", avg);
    return ptr;
}
int main()
{
    int x = 5;
    int y = 7;
    int *ptr1;
    int *ptr2;

    ptr1 = sum(x, y);
    ptr2 = avarage(x, y);

    printf("The address of sum is: %p and of avarage is: %p", ptr1, ptr2);

    return 0;
}
