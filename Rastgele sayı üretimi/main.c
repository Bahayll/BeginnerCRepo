#include <stdio.h>
#include <stdlib.h>
int a=3;
int main()
{
    int a=2;
    fonk1();
     printf("\n%d", a );
    fonk2();
 printf("\n%d", a );
    fonk1();
 printf("\n%d", a );
    fonk2();
 printf("\n%d", a );
    return 0;

}
void fonk1(){
static int a=3;
a++;
printf("\nA=%d", a);

}
void fonk2(){
int a=3;
a++;
printf("\nA=%d", a);

}
