#include <stdio.h>
#include <stdlib.h>

//SORUNUN CEVABI : D-)

int a=3;
int main()
{
    int b=10;
    b+=a++;
    printf ("A=%d",b);
    {
        a--;
        b*=--a;
        printf ("\nA=%d, B=%d",b,a);
    }
    printf("\nA=%d, B=%d",a,b);

    b=fonk (b);
    printf("\nB=%d",b);
    a= fonkl (b);
    printf ("\nA=%d",a);
    fonk3 ();
    printf("\nA=%d",b);
    printf ("\nB=%d",a);

    return 0;
}
int fonk (int a){
    return a*a;
    a=32;
}

int fonkl (int b) {
    return a++;
}

void fonk3 (){
    a=35;
}

