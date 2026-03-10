// wap day number as inpute and displays the corresponding day

#include <stdio.h>
int main()
{
    int d;
    printf("Enter day number: ");
    scanf("%d", &d);

    switch (d)
    {
    case 1:
    {
        printf("The day is monday\n");
        break;
    }

    case 2:
    {
        printf("The day is tuesday\n");
        break;
    }
    case 3:
    {
        printf("The day is wednesday\n");
        break;
    }

    case 4:
    {
        printf("The day is thursday\n");
        break;
    }
    case 5:
    {
        printf("The day is friday\n");
        break;
    }

    case 6:
    {
        printf("The day is satureday\n");
        break;
    }

    case 7:
    {
        printf("The day is sunday\n");
        break;
    }

        default:
        {
            printf("Enter a valid day number");
            break;
        }
    }
    return 0;
}