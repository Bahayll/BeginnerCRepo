#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    printf("a degerinin adresi= %p, \t degeri = %d \n",&a,a);

     a= a +1;
    printf("a = a + 1");

     printf("\n a degerinin adresi= %p, \t degeri= %d \n",&a,a);

    return 0;
}
