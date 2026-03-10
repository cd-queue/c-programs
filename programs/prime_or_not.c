#include <stdio.h>
int main()
{
    int not_prime = 0;
    int n = 1;
    int i = 2;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
        printf("%d is not prime", n);
    }
    else
    {

        /*for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
            }
        }*/

       do{

        if (n % i == 0 && n != 2)
            {
                not_prime = 1;
            }
            i++;

       }while(i < n);
        if (not_prime)
        {
            printf("%d is not a prime", n);
        }
        else
        {
            printf("%d is a prime", n);
        }
    }
    return 0;
}