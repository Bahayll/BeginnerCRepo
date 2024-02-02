#include <stdio.h>
#include <stdlib.h>
//SORUNUN CEVABI : B-) A=26,X=3,Y=4

int x =5;
static int y =1;
int main()
{
    printf("x=%d",x);
    {
        int x = 10;
        fonk(x,y);
        printf("\nx=%d , y=%d",x,fonk2(y));
    }
    printf("\nx=%d",x);
    fonk(x,y);
    printf("\nx=%d , y=%d",x,fonk2(y));
    x=10;
    printf("\nx=%d , y=%d",fonk3(),fonk3());
    y=fonk3();
    printf("\ny=%d",++y);
    return 0;
}

void fonk (int a,int b){
    a*=5;
    printf("\na=%d",a);
    printf("\na=%d",--a+2);
    printf("\na=%d",a+++10);
    printf("\na=%d",++a);
}

int fonk2(int c){
    return c*2;
}

int fonk3 (){
    return y*3;
}
