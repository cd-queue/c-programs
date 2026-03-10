#include <stdio.h>
int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100)
    {
        printf("Grade: A", marks);
    }
    if(marks >= 60 && marks <= 79)
    {
        printf("Grade: B", marks);
    }
    if(marks >= 50 && marks <= 59)
    {
        printf("Grade: C", marks);
    }
    if(marks >= 0 && marks <= 49)
    {
        printf("You are failed", marks);
    }

    return 0;

}