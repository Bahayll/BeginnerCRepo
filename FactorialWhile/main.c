#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial = 1, number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calculate factorial using a while loop
    while (number > 0) {
        factorial *= number; // Multiply factorial by current number
        number--;            // Decrement number for the next iteration
    }
    
    printf("Factorial = %d\n", factorial);
    
    return 0;
}
