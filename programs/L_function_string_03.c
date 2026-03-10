#include <stdio.h>
#include <string.h>
int main(){

    char s1[56] = "Ajahar";
    char s2[56] = " bhai";
    strcat(s1, s2); //Now s1 containts s2 (Ajaharbhai) if i want a space then just give a space front of bhai (_bhai).
    printf("%s", s1);

}