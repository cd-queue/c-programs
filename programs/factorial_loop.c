#include <stdio.h>
int main()
{   int i = 1;
    int product = 1;
    int n = 5;

    //using for loop.
    
    for (int i = 1; i <= n; i++)
    {
        product *= i; // product = product*i; understanding easy.
    }
    printf("the factoial of %d is: %d", n, product);

    //using while loop.

   /*while(i <= n)
    {
        product *=i;
        i++;
    }
    printf("the factorial of %d is: %d", n, product);*/
    return 0;
}