#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
}d;
int compare(d d1, d d2)
{
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd)
    {
         return 0;
    }

    if (d1.yyyy > d2.yyyy){
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    { 
        return -1;
    }
    if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}
int main(){
    d d1 = {12, 5, 2015};
    d d2 = {12, 5, 2015};
    printf("%d", compare(d1, d2));
    return 0;
}
