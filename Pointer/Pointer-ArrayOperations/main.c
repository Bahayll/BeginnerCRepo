#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5] = {2, 5, 7, 95, 35};
    int *p = numbers; // Equivalent to &numbers[0], both point to the first element of the array

    // Printing the addresses
    printf("%p\n", p);   // Prints the address of numbers[0]
    printf("%p\n", p + 1); // Prints the address of numbers[1]
    printf("%p\n", p + 2); // Prints the address of numbers[2]
    printf("%p\n", p + 3); // Prints the address of numbers[3]

    // Printing the values using dereferencing
    printf("%d\n", *p);        // Prints the value at numbers[0], which is 2
    printf("%d\n", *(p + 1));  // Prints the value at numbers[1], which is 5
    printf("%d\n", *(p + 2));  // Prints the value at numbers[2], which is 7
    printf("%d\n", *(p + 3));  // Prints the value at numbers[3], which is 95

    return 0;
}
