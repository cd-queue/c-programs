#include <stdio.h>
int main()
{
    int i = 1, sum = 0;


    //using for loop
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        sum += i;
    }
    printf("\nthe sum of 10 natural numbers is: %d\n", sum);

    //using while loop

    i = 1;
    sum = 0;
    
    while(i <= 10)
    {
        printf("%d\t", i);
        sum += i;
        i++;
    }
    printf("\nthe sum of 10 natural numbers is; %d\n", sum);


    //using do while loop

    i = 1;
    sum = 0;
    do{
        printf("%d\t",i);
        sum += i;
        i++;
    }while(i <= 10);
   
    printf("\nthe sum of first 10 natural numbers is: %d\n", sum);
    return 0;

}