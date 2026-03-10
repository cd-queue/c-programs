#include <stdio.h>
int main()
{
    int n, sum=0, i;
    
    printf("enter a integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        //printf("%d x %d = %d\n", n,i, n*i); if doesn't need table print. 
        sum += (n*i);
    }
    printf("\nthe sum of multiplication table of given number is: %d",sum);
    return 0;


}