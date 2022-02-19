/*
Task:-
You have to write a C program that will:

Allows the user to play this game three times with a computer.
Log the scores of the computer and the player.
Display the name of the winner at the end
Note: You have to display the name of the player during the game. Take users name as an input from the user.
*/
#include <stdio.h>
#include <stdlib.h>
#include <Time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and it's defined inside stdlib.h
    return rand() % n;
}

void seriesWinner(char name[20],int userCount,int computerCount)
{
    printf("%s's Total point is: %d\n",name,userCount);
		printf("Computer Total point is: %d\n",computerCount);

    if (userCount > computerCount)
    {
        printf("The Final Winner is %s\n\n", name);
    }
    else if (userCount < computerCount)
    {
        printf("The Final Winner is Computer\n\n");
    }
    else
    {
        printf("Series Draw");
    }
    
}

int main()
{
    printf("########### ROCK,PAPER,SCISSOR ##########\n");
    char name[20];
    int userInput = 0, computerInput = 0, i = 0;
    int userCount = 0, computerCount = 0;
    printf("Enter Your Name: ");
    scanf("%s", name);
    while (i < 3)
    {
        printf("PLEASE NOTE:\n1.Press 1 for Rock.\n2.Press 2 for Paper.\n3.Press 3 for Scissor.\n\n");
        scanf("%d", &userInput);
        getchar();
        computerInput = generateRandomNumber(3) + 1;

        if (userInput == 1)
        {
            printf("your  choice: Rock\n");
        }

        else if (userInput == 2)
        {
            printf("your  choice: Paper\n");
        }

        else if(userInput == 3)
        {
            printf("Your  choice: Scissor\n");
        }


        if (computerInput == 1)
        {
            printf("Computer  choice: Rock\n");
        }

        else if (computerInput == 2)
        {
            printf("Computer  choice: Paper\n");
        }

        else if(computerInput == 3)
        {
            printf("Your  choice: Scissor\n");
        }

        if ((userInput == 1 && computerInput == 2) || (userInput == 2 && computerInput == 3) || (userInput == 3 && computerInput == 1))
        {
            printf("Computer Win\n\n");
            computerCount++;
        }
        else if ((userInput == 1 && computerInput == 3) || (userInput == 2 && computerInput == 1) || (userInput == 3 && computerInput == 2))
        {
            printf("%s Win\n\n", name);
            userCount++;
        }
        else
        {
            printf("Match Draw\n\n");
        }

        i++;
    }

    seriesWinner(name,userCount,computerCount);

    	
    return 0;
}
