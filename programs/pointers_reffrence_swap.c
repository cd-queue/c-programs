#include <stdio.h>

void swap(int* x, int* y);

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 4;
    int b = 3;

    swap(&a, &b);

    printf("a = %d\nb = %d", a,b);

    return 0;

}