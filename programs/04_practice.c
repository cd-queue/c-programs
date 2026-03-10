//wap to convert fahrenheit to celsius

#include <stdio.h>
int main ()
{
    float f,c;
     
     printf("Enter Fahrenheit: ");

     scanf("%f",&f);

     c = (f-32)*5/9;

     printf("celsius: %.1f",c);

     return 0;


}