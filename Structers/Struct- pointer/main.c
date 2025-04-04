#include <stdio.h>
#include <stdlib.h>


#include  <string.h> //strcpy fonksiyonu için lazým

struct ogrenci{
char isim [15];
char soyisim [15];
int numara;
};

int main()
{  // int a= 5 ,*p;
    // p=&a;

   struct ogrenci ogrenci1;

   struct ogrenci *tut; // struct ogrenci tipinde tut adlý bir pointer belirledik..

   strcpy(ogrenci1.isim,"Baha");
  strcpy(ogrenci1.soyisim,"Yolal");
  ogrenci1.numara= 221;


  tut=&ogrenci1;

  printf("%s %s %d\n",ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara);
  printf("%s %s %d",tut->isim, tut->soyisim, tut->numara);  //    *tut.isim = tut->isim


  return 0;
}
