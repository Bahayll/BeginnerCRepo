#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1[5]{1,2,3,4,5};

   // fonk(d1[2]);
    //printf("%d",d1[2]);

    d1[2]= fonk1(d1[2]);
   printf("%d",d1[2]);


    return 0;
}
// hata
void fonk(int a){

a=a*2;  // diziye yazmad�k veya geri d�nd�rmekdik

}
int fonk1(int a ){
return a*2;
}


//program ��kt�s� ne olur?  == 3
// ben dizinin 3.eleman�n� 2 kat artt�rmak i�in ne yapmal�y�m
// geri de�er d�nd�rmeliyiz...
