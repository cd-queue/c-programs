#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0;

    //Taking input from user..
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    //Counting the number of digits..
    while (originalNum != 0)
    {
        originalNum /= 10; //originalNum = originalNum/10
        ++n;
    }

    originalNum = num;

    //Calculate sum of each digit raised to the power of total digits.
    while (originalNum != 0)
    {
        remainder = originalNum%10;
        result += pow(remainder, n);
    }

}