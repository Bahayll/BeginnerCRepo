#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *aptr, b[5], *bptr;
    aptr = &a;
    bptr = b; // &b[0] ile aynıdır

    printf("\nAddress of a: %p, Value of aptr: %p\n", (void*)&a, (void*)aptr);
    printf("Address of b: %p, Value of bptr: %p\n", (void*)&b, (void*)bptr);

    aptr += 1;
    bptr += 1;

    printf("\nAfter pointer arithmetic:\n");
    printf("Address of a: %p, Value of aptr: %p\n", (void*)&a, (void*)aptr);
    printf("Address of b: %p, Value of bptr: %p\n", (void*)&b, (void*)bptr);

    return 0;
}
