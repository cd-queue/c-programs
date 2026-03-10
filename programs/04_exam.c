#include <stdio.h>
int main()
{
    int arr[5] = {2, 6, 8, 3, 5};

    for(int i = 0; i<5; i += 2)
    {
        printf("index %d: %d\n", i, arr[i]);
    }
    return 0;
}