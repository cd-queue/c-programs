//wap to convert celsius to fahrenheit

#include <stdio.h>

int main()
{
    float c,f;

    printf("Enter celcius:");

    scanf("%f", &c);

    f = (9.0/5.0 *c) +32;

    printf("fahrenheit: %f", f);

    return 0;

}