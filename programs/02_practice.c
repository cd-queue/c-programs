// wap to calculate the area of a rectangle

#include <stdio.h>
int main()
{
    int Area, Lenght, Width;

    printf("Enter Lenght: ");

    scanf("%d", &Lenght);

    printf("Enter Width: ");

    scanf("%d", &Width);

    Area = Lenght * Width;

    printf("The Area of Rectangle: %d", Area);

    return 0;
}