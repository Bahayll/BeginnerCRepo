#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, *aptr;
    aptr = &a; // If we don't assign this, aptr will not hold any valid address.

    printf("Value of variable a = %d", a); // Prints 5
    printf("\nValue of variable a = %d", a + 1); // Prints 6

    printf("\nAddress of variable a = %p", (void*)&a);
    printf("\nAddress of variable a = %p", (void*)(&a + 1)); // Adding 1 to the address of a increments it by the size of int (4 bytes)

    printf("\nAddress of pointer aptr = %p", (void*)&aptr);
    printf("\nAddress of pointer aptr = %p", (void*)(&aptr + 1)); // Adding 1 to the address of a pointer increments it by the size of the pointer (8 bytes)

    printf("\nAddress stored in pointer aptr = %p", (void*)aptr); // Prints the address stored in aptr, which is the address of a
    printf("\nAddress stored in pointer aptr = %p", (void*)(aptr + 1)); // Adding 1 to aptr increments it by the size of int (4 bytes)

    printf("\nValue stored in the address pointed to by aptr = %d", *aptr); // Prints the value stored at the address in aptr, which is 5
    printf("\nValue stored in the address pointed to by aptr = %d", *aptr + 1); // Prints the value at the address in aptr plus 1, which is 6

    return 0;
}
