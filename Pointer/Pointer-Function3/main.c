#include <stdio.h>
#include <stdlib.h>

// Function prototype for fonk
void fonk(int *ptr);

int main()
{
    int a = 10, *aptr;
    aptr = &a;

    // Print the address and value of variable a
    printf("Address of variable a = %p,\t value = %d \n", (void*)&a, a);

    // Print the address of aptr, the address it holds, and the value at that address
    printf("\nAddress of pointer aptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&aptr, (void*)aptr, *aptr);

    a = a + 1; // Increment the value of variable a

    // Call the function and pass the pointer aptr
    fonk(aptr);

    // Print values after calling fonk
    printf("\nAFTER FUNCTION CALL\n");
    printf("Address of variable a = %p,\t value = %d \n", (void*)&a, a);
    printf("Address of pointer aptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&aptr, (void*)aptr, *aptr);

    return 0;
}

// Function definition for fonk, takes a pointer to int as parameter
void fonk(int *ptr)
{
    // Print values inside fonk before modification
    printf("\nINSIDE fonk FUNCTION\n");

    // Print the address of ptr, the address it holds, and the value at that address
    printf("Address of pointer ptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&ptr, (void*)ptr, *ptr);

    *ptr = *ptr + 5; // Increment the value at the address ptr points to by 5

    // Print values after modification
    printf("After modifying value at ptr:\n");
    printf("Address of pointer ptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&ptr, (void*)ptr, *ptr);

    // Note: Changes to *ptr inside fonk affect a in main because ptr points to a's address
}
