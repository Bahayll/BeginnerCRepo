#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y[6] = {2, 3, 5, 7, 11, 13};
    int *yp = &y[2]; // yp points to the third element of array y

    printf("%d\n", *y); // Prints the value of the first element of y, which is 2
    printf("%d\n", *yp); // Prints the value at yp, which is y[2] = 5
    printf("%p\n", yp); // Prints the memory address stored in yp
    printf("%p\n", (yp + y[0])); // Prints the memory address after moving y[0] positions forward from yp
    printf("%p\n", yp[4] + 1); // Prints the memory address calculated by adding 1 to yp[4]

    return 0;
}
