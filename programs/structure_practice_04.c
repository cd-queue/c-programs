#include <stdio.h>
#include <string.h>

typedef struct c
{
    int accno;
    char name[20];
    char ifsc[12];
    float balance;
} bank;

int main()
{
    bank a;
    a.accno = 304801229;
    strcpy(a.name, "Ajahar");
    strcpy(a.ifsc, "iafhe8465984");
    a.balance = 78000;

    printf("Account no: %d\nName: %s\nIfsc code: %s\nBank balance: %.2f", a.accno, a.name, a.ifsc, a.balance);

    return 0;
}