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

a=a*2;  // diziye yazmadýk veya geri döndürmekdik

}
int fonk1(int a ){
return a*2;
}


//program çýktýsý ne olur?  == 3
// ben dizinin 3.elemanýný 2 kat arttýrmak için ne yapmalýyým
// geri deðer döndürmeliyiz...
