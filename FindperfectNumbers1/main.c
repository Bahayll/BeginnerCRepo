#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNumber;
    int ones, tens, hundreds, thousands;
    int count = 0; // Holds the count of perfect numbers found.

    printf("Enter a 4-digit number: ");
    scanf("%d", &inputNumber);

    if (inputNumber < 1000 || inputNumber > 9999) {
        printf("The number you entered is not a 4-digit number!\n");
        return 1; // Exits the program in case of invalid input.
    }

    for (int number = inputNumber + 1; number < 10000; number++) {
        thousands = number / 1000;
        hundreds = (number / 100) % 10;
        tens = (number / 10) % 10;
        ones = number % 10;

        if (ones + hundreds == tens + thousands) {
            printf("%d\n", number);
            count++;
        }
    }

    printf("\nTotal %d perfect numbers found.\n", count);
    return 0;
}
