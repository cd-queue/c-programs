#include <stdio.h>

int sum(int, int);//function prototype

int sum(int a, int b)//function defination
{

    // printf("the sum is: %d", x+y);

    return a+b;
 }


int main(){
    int a =5;
    int b = 6;

    int c = sum(a,b);//function cll
    printf("%d", c);
}