#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 4, y=12, z=1;

    printf("x adresi= %p, \t degeri= %d \n",&x,x);
    printf("= %p, \t = %d\n",&x+1,x+1);
    printf("= %p, \t = %d\n",&x+2,x+1);
    printf("= %p, \t = %d\n",&x+1,x+2);
    return 0;
}
