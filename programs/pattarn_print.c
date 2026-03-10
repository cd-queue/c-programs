#include <stdio.h>
int main()
{
    int n = 3;

    for(int i = 0; i < n; i++)
    {
        //2*i+1:formula
        //2*0+1=1
        //2*1+1=3
        //2*2+1=5

    for(int j = 0; j<2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//2*(n-i-1)+1:formula for revers
//brackdown:
//2*(3-0-1)+1=5
//2*(3-1-1)+1=3
//2*(3-2-1)+1=1

