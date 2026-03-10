#include <stdio.h>
int main()
{
    int arr[3][10];
    int a[] = {2, 4, 6};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = a[i] * (j + 1);
        }
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", a[i], j+1, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}