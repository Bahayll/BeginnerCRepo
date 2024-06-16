#include <stdio.h>
#include <stdlib.h>

// Function declaration
int *larger(int *x, int *y);

int main()
{
    int a = 15, b = 92;
    int *p;

    printf("\n a = %d, b = %d\n", a, b);
    printf("\n &a = %p, &b = %p, &p = %p\n", (void *)&a, (void *)&b, (void *)&p);

    p = larger(&a, &b);

    printf("\n &p = %p, *p = %d\n", (void *)&p, *p);
    printf("\n %d is larger \n", *p);

    return 0;
}

// Function definition
int *larger(int *x, int *y)
{
    printf("\n &x = %p, &y = %p \n", (void *)&x, (void *)&y);
    printf("\n x = %p, y = %p \n", (void *)x, (void *)y);
    printf("\n *x = %d, *y = %d \n", *x, *y);

    if (*x > *y)
        return x;
    else
        return y;
}
