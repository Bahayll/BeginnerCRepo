#include <stdio.h>
#include <stdlib.h>
struct ogrenci{ // int gibi bir de�i�ken tipidir.

   char isim[10];
   char soyisim[10];
   int numara;
};



void goster(struct ogrenci a){    // g�nderece�imiz nesne struct ogrenci tipinde oldu�undan b�ylee g�sterdik..

    printf("Ogrenci bilgiler = %s  %s  %d",a.isim,a.soyisim,a.numara);
}
int main()
{
    struct ogrenci ogrenci1={"baha","yolal",221};// int a gibi d���n buda struct ��renci tipinde bir nesne belirledik.
    goster(ogrenci1);

    return 0;
}
