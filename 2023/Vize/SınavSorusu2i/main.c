#include <stdio.h>
#include <stdlib.h>

int x = 5;
static int y = 1 ;

int main()
{
    printf("X=%d",x);
    {
        int x = 10;
        fonk(x,y);
        printf("\nX=%d, Y=%d",x,fonk2(y));
    }
    printf("\nX=%d",x);
    fonk(x,y);
    printf("\nX=%d, Y=%d",x,fonk2(y));
    int x = 10;
     printf("\nX=%d, Y=%d",fonk3(),fonk3());
     y=fonk3();
     printf("\n%d",++y);
     printf("\nSonX=%d, SonY=%d",x,y);
     return 0 ;

}

void fonk(int a, int b){
a*=5;
printf("\nA=%d",a);
printf("\n%d",--a+2);
printf("\n%d",a+++10);
printf("\n%d",++a);
printf("\nSonA=%d",a);

}

int fonk2(int c){
return c*2;
}

int fonk3(){
return y*2;


}
