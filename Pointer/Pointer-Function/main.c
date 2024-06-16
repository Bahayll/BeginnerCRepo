#include <stdio.h>
#include <stdlib.h>

// Function that takes a pointer to an integer as a parameter
void fonk(int *ptr);

int main()
{
    int a = 10, *aptr;
    aptr = &a;

    // Print the address and value of variable a
    printf("Address of variable a = %p,\t value = %d", (void*)&a, a);
    
    // Print the address of aptr, the address it holds, and the value at that address
    printf("\nAddress of pointer aptr = %p,\t address it holds = %p,\t value it points to = %d", 
           (void*)&aptr, (void*)aptr, *aptr);
    
    // Call the function and pass the pointer aptr
    fonk(aptr);

    return 0;
}

// Function definition that takes a pointer to an integer
void fonk(int *ptr)
{
    // Print the address of ptr, the address it holds, and the value at that address
    printf("\nAddress of pointer ptr = %p,\t address it holds = %p,\t value it points to = %d",
           (void*)&ptr, (void*)ptr, *ptr);
}
