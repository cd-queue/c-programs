#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("Enter subject 1 marks: ");
    scanf("%d", & marks1);

    printf("Enter subject 2 marks: ");
    scanf("%d", & marks2);

    printf("Enter subject 3 marks: ");
    scanf("%d", & marks3);

    printf("the marks are %d, %d and %d\n", marks1, marks2, marks3);

    if(marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are failed duo to less marks in individual subject(s)!\n");
    }
    else if ((marks1 + marks2 + marks3)/3 <40)
    {
        printf("You are failed duo to less parcentage\n");
    }
    else{
        printf("You are passed!\n");
    }
    
    return 0;
}
  