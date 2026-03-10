//wap calculate the value of simple intrest

#include <stdio.h>
int main()
{
    
    float p;
    int r,t;

    printf("p:");
    scanf("%f", &p);
    
    printf("r:");
    scanf("%d", &r);
    
    printf("t:");
    scanf("%d", &t);

    printf("The value of simple intrest is: %f", (p*r*t)/100);

    return 0;

   
}