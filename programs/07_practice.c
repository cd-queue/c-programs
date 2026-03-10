//wap to calculate the area of a triangle using the formula (1/2 * base * height)

#include <stdio.h>
int main()
{
    float a,b,h;

    printf("Enter base:");
    scanf("%f", &b);
   
    printf("Enter height:");
    scanf("%f", &h);

    a = (b*h)*1/2;

    printf("The area of a triangle is: %.1f", a);

    return 0;
    
}
