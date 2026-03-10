#include <stdio.h>
int strlen(char str[])
{
  //MATHOD 1........
  int i = 0;
  int count;
  char c = str[i];
  while (c != '\0')
  {
    c = str[i];
    i++;
  }
  count = i - 1;
  return count;
}
  //MATHOD 2........
  /*char str[] = "Ajahar";
  int count = 0;
  while (str[count] != '\0')
  {
    count++;
  }
  printf("%d", count);*/

  //MATHOD 3........
  /*char str[] = "Ajahar";
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  printf("%d", count);*/

  //MATHOD 4........
  /*char str[] = "Ajahar";
  int count = 0;
  for (; str[count] != '\0'; count++);
    printf("%d", count);*/
int main()
{
  char str[] = "Ajahar";
  printf("%d", strlen(str));

  return 0;
}