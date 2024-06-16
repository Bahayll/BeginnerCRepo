#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *aptr, *bptr;
    int b[3] = {10, 20, 30};
    int i;

    // aptr points to the variable a
    aptr = &a;

    // bptr points to the beginning of array b 
    bptr = b;

    // The address of variable a and the value of aptr 
    printf("\n&a = %p, aptr = %p\n", (void*)&a, (void*)aptr);

    // The address of array b (starting address) and the value of bptr
    printf("\n&b = %p, bptr = %p\n", (void*)&b, (void*)bptr);

    // The first element of array b and the value pointed by bptr
    printf("\nb[0] = %d, *bptr = %d\n", b[0], *bptr);

    // Set bptr to point to the second element of array b
    bptr = &b[1];
    printf("\nbptr = &b[1];");
    printf("\n&b[1] = %p, b[1] = %d\n", (void*)&b[1], b[1]);
    printf("\nbptr = %p, *bptr = %d\n", (void*)bptr, *bptr);

    // Increment bptr to point to the next element 
    bptr++;
    printf("\nbptr++");
    printf("\nbptr = %p, *bptr = %d\n", (void*)bptr, *bptr);

    return 0;
}
