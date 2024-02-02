#include <stdio.h>
#include <stdlib.h>
struct ogrenci{ // int gibi bir deðiþken tipidir.

   char isim[10];
   char soyisim[10];
   int numara;
};



void goster(struct ogrenci a){    // göndereceðimiz nesne struct ogrenci tipinde olduðundan böylee gösterdik..

    printf("Ogrenci bilgiler = %s  %s  %d",a.isim,a.soyisim,a.numara);
}
int main()
{
    struct ogrenci ogrenci1={"baha","yolal",221};// int a gibi düþün buda struct öðrenci tipinde bir nesne belirledik.
    goster(ogrenci1);

    return 0;
}
