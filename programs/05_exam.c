#include <stdio.h>
int main()
{
    int arr[5] = {5, 1, 2, 4, 3};
    int ans = 0;

    for(int i = 0; i<5; i++)
    {
        ans = ans + arr[i];
    }

    printf("The sum of array elements is: %d", ans);
    return 0;
}