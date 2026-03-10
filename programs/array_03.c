#include <stdio.h>
int main(){
    int marks[3] = {1, 7, 5};
    for(int i = 0; i < 3; i++){
        printf("The value of array at index %d is %d\n", i, marks[i]);
    }
    return 0;
}