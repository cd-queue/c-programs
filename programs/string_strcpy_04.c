#include <stdio.h>
int mystrlen(char str[])
{
    int count = 0;
    for (int i = 0; str[count] != '\0'; i++)
        count++;

    return count;
}
void mystrcpy(char target[], char source[])
{
    int length = mystrlen(source);
    for (int i = 0; i < length; i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}
int main()
{
    char source[] = "ajahar";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", target, source);
    return 0;
}