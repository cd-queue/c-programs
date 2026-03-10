#include <stdio.h>
#include <string.h>

int main(){
    char sourch[] = "Ajahar";
    char target[50];

    strcpy(target, sourch); //target now copy "Ajahar".

    printf("%s %s", sourch, target);

    return 0;
}