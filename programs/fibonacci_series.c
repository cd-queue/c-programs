#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n == 2)
    {
        return n - 1;
    }
    //fibonacci (5-1) + fibonacci(5-2) = fibonacci(4)+fibonacci(3)
    //fibonacci (4-1) + fibonacci(4-2) =fibonacci(3) + fibonacci(2)
    //fibonacci (3-1) + fibonacci(3-2) =fibonacci(2) + fibonacci(1)
    //fibonacci (2-1) + fibonacci(2-2) =fibonacci(1) + fibonacci(0)
    //fibonacci (1-1) + fibonacci(1-2) =fibonacci(0)
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 2;
    printf("the value of fibonacci series at %d is: %d", n, fibonacci(n));

    return 0;

}