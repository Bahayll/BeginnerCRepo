#include <stdio.h>
#include <stdlib.h>

/* Fibonacci sequence: 0 1 1 2 3 5 8 13 21 .... */

int fibon(int a);

int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d", &x);
    if (x < 0)
        printf("Please enter a number greater than or equal to 0...");
    else
        printf("Result = %dth element %d", x, fibon(x));
    return 0;
}

int fibon(int a)
{
    if (a == 0 || a == 1)
        return a;
    else
        return fibon(a - 1) + fibon(a - 2);
}
