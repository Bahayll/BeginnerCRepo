#include <stdio.h>
#include <stdlib.h>



/* RECURSIVE FUNCTION TO FIND GREATEST COMMON DIVISOR(GCD) */


int GCD(int number1, int number2) {
    if (number2 == 0) { // if the second number is zero
        return number1; // return number1
    } else {
        return GCD(number2, number1 % number2); // call the function with number2 and number1 % number2
    }
}

/*---- MAIN FUNCTION ----*/
int main() {
    int number1, number2, result; // declare variables

    printf("Enter the first number: "); // prompt user for input
    scanf("%d", &number1); // read the first number

    printf("Enter the second number: "); // prompt user for input
    scanf("%d", &number2); // read the second number

    result = GCD(number1, number2); // call the recursive function

    printf("GCD(%d, %d) = %d\n", number1, number2, result); // print the result

    return 0;
}
