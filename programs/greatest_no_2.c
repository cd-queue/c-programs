#include <stdio.h>
int main()
{
    int a, b, c, d, big;

    printf("Enter four numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b && a > c && a > d){
        big = a;
    }
    else if(b > a && b > c && b > d){
        big = b;
    }
    else if(c > a && c > b && c > d){
        big = c;
    }
    else if(d > a && d > b && d > c){
        big = d;
    }
    printf("the greatest number is: %d", big);

    return 0;
}