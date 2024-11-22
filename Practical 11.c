//In This Practical We are going to Create a Game that simulates a matchstick game between the user and the computer.

#include <stdio.h>
void main()
{

   int m=21,p,c;

   do
   {

        printf("Enter matchsticks from 1 to 4\n");
        scanf("%d",&p);

        if(p<1 || p>4)
        {
            printf("Invalid matchsticks \n");
            printf("Enter matchsticks again\n");
            continue;
        }
        printf("You have entered %d number of matchsticks\n",p);
        printf("Now its computer turn\n");
        m = m-p;
        c=5-p;
        m = m - c;
        printf("Computer has entered %d number of matchsticks\n",c);
        printf("Total matchsticks remaining is %d\n",m);

        if(m==1)
        {
            printf("Game is over you are loser");
            break;
        }
   }
   while(1);
}

