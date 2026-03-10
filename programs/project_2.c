#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    /*
        0--> Snake


        1--> Water
        2--> Gun
    */
   printf("Choose 0 for Snake, 1 for Water and 2 for Gun \n");
   scanf("%d", &player);
   printf("%d\n", computer);

   if (player == 0 && computer == 0)
   {
        printf("Drow");
   }
   else if (player == 0 && computer == 1)
   {
        printf("You Win");
   }
   else if (player == 0 && computer == 2)
   {
        printf("You loos");
   }
   else if (player == 1 && computer == 0)
   {
        printf("You loos");
   }
   else if (player == 1 && computer == 1)
   {
        printf("Drow");
   }
      else if (player == 1 && computer == 2)
   {
        printf("Drow");
   }
   else if (player == 2 && computer == 0)
   {
        printf("You win");
   }
   else if (player == 2 && computer == 1)
   {
        printf("Drow");
   }
   else if (player == 2 && computer == 2)
   {
        printf("Drow");
   }
   else 
   {
        printf("Somthing Want Wrong!");
   }

   return 0;
}