#include <stdio.h>
int main()
{
    int i = 72;
    int* j = &i;
    
    
    printf("the addrase of i is: %p\n", &i);
    printf("the addrase of i is: %p\n", j);
    printf("the addrase of j is: %p\n", &j);
 
    return 0;
}