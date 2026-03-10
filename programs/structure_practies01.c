#include <stdio.h>

struct vactor
{
    int i;
    int j;
};

int main(){
    struct vactor v = {1, 2};
    printf("the value of vactor is %di + %dj", v.i, v.j);

    return 0;
}