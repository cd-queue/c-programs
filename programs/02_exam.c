#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0, end = 5-1;
    
    while(start < end)
    {
        int tem = arr[start];
        arr[start] = arr[end];
        arr[end] = tem;
        start++;
        end--;
    }

    for(int i = 0; i<5; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;

}