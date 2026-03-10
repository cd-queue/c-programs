#include <stdio.h>

typedef struct vactor
{
    int i;
    int j;
} v;

v sumVactor(v v1, v v2)
{
    v v3 = {v1.i + v2.i, v1.j + v2.j};

    return v3;
}

int main()
{
    v v1 = {3, 5};
    v v2 = {2, 4};
    v v3 = sumVactor(v1, v2);
    printf("The value of vactor v3 is %di + %dj", v3.i, v3.j);

    return 0;
}