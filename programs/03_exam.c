#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int issorted = 1;

    for(int i = 0; i<5-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            issorted = 0;
            break;
        }
    }

    if(issorted)
    {
        printf("The array is sorted in ascending order.");
    }
    else{
        printf("The array is not sorted in ascending order.");
    }
    return 0;
}