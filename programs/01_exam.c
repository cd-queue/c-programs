#include <stdio.h>
int main()
{
    int arr[5] = {5, 9, 12, 6, 3};
    int min = arr[0];

    for(int i = 0; i<5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The smallest element of an array is: %d", min);
    return 0;
}