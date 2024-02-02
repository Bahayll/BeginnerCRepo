#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *aptr, b[5], *bptr;
    aptr=&a;
    bptr=b; //&b[0] farklarý yoktur.
    printf("\n &a= %p, aptr =%p\n",&a, aptr);
    printf("\n &b= %p, bptr =%p\n",&b, bptr);

    aptr+=1;
    bptr+=1;

        printf("\n &a= %p, aptr =%p\n",&a, aptr);
    printf("\n &b= %p, bptr =%p\n",&b, bptr);

    return 0 ;
}
