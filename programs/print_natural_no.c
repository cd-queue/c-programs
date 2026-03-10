//using while loop
#include <stdio.h>
int main()
{
    int i=1;
   while(i<=10)
   { 
    if(i==5){

        continue;
   }
    printf("%d\t",i);
    i++;
   }
    return 0;
}