#include <stdio.h>
#include <stdlib.h>
int a =3 ;

int main()
{
    int b = 10;
    b+=a++;

    printf("A=%d",b);

    {
        a--;
        b*=--a;
        printf("\nA=%d, B=%d",b,a);
    }
    printf("\nA=%d, B=%d",a,b);
    b=fonk(b);
    printf("\nB=%d",b);
     a=fonk1(b);
    printf("\nA=%d",a);
   fonk3();
    printf("\nA=%d",b);
    printf("\nB=%d",a);

}
int fonk(int a){

return a*a;
a=32;
}
int fonk1(int b){
return a++;
}
void fonk3(){
a=35;
}
