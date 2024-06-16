#include <stdio.h>
#include <stdlib.h>

// Function prototype for fonk
void fonk(int *ptr);

int main()
{
    int a = 15, *aptr;
    aptr = &a;

    // Print the address and value of variable a
    printf("Address of variable a = %p,\t value = %d\n", (void*)&a, a);
    
    // Print the address of aptr, the address it holds, and the value at that address
    printf("\nAddress of pointer aptr = %p,\t address it holds = %p,\t value it points to = %d\n", 
           (void*)&aptr, (void*)aptr, *aptr);
    
    // Call the function and pass the pointer aptr
    fonk(aptr);

    // Print values after calling fonk
    printf("\nAFTER FUNCTION CALL\n");
    printf("Address of variable a = %p,\t value = %d\n", (void*)&a, a);
    printf("Address of pointer aptr = %p,\t address it holds = %p,\t value it points to = %d\n", 
           (void*)&aptr, (void*)aptr, *aptr);

    return 0;
}

// Function definition for fonk, takes a pointer to int as parameter
void fonk(int *ptr)
{
    // Print values inside fonk
    printf("\nINSIDE fonk FUNCTION\n");

    // Print the address of ptr, the address it holds, and the value at that address
    printf("Address of pointer ptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&ptr, (void*)ptr, *ptr);

    // Modify the value pointed to by ptr
    *ptr = *ptr + 5;

    // Print values after modification
    printf("Address of pointer ptr = %p,\t address it holds = %p,\t value it points to = %d\n",
           (void*)&ptr, (void*)ptr, *ptr);
}
