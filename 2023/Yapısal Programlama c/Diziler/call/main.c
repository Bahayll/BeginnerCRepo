#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1[5]={1,2,3,4,5};
 fonk (&d1[2]);
    printf("%d",d1[2]);
    return 0;

}
void fonk(int *a ){

 *a*=2;
}
