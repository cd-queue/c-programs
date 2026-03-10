#include <stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    //for(int i = 10; i; i--) revers mathod
    for(int i = 0; i <= 10; i++)//currect mathod
    {
        printf("%d X %d = %d\n", n, i, n*i);

    }
    return 0;
}