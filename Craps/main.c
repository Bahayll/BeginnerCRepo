#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDice(); // Function prototype for rolling dice

int main()
{
    int dice1 = 0, dice2 = 0, diceSum = 0, point = 0;

    srand(time(NULL)); // Initialize random seed based on current time

    // Roll the dice for the first time
    dice1 = RollDice();
    dice2 = RollDice();
    diceSum = dice1 + dice2;

    // Check the result of the first roll
    if (diceSum == 7 || diceSum == 11)
    {
        printf("You win!");
    }
    else if (diceSum == 2 || diceSum == 3 || diceSum == 12)
    {
        printf("You lose!");
    }
    else
    {
        point = diceSum;
        printf("Point is %d\n", point);

        // Roll the dice until a 7 (lose) or the point (win) is rolled again
        do
        {
            dice1 = RollDice();
            dice2 = RollDice();
            diceSum = dice1 + dice2;

            if (diceSum == 7)
            {
                printf("You lose!");
                break;
            }
            else if (diceSum == point)
            {
                printf("You win!");
                break;
            }

        } while (diceSum != point);
    }

    return 0;
}

// Function definition for rolling a dice (returns a random number between 1 and 6)
int RollDice()
{
    return (rand() % 6) + 1;
}
