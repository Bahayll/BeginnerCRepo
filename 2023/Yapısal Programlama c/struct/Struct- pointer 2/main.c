#include <stdio.h>
#include <stdlib.h>

#include <string.h>

struct ogrenci {
char isim[15];
char soyisim[15];
int numara;
};
struct ogrenci *degerAl(struct ogrenci *p){// fonksiyon pointer olmazsa geri deðer dönmez.
strcpy(p->isim,"Mehmet");
strcpy(p->soyisim,"Yýlma");
p->numara=494;

return p;
};
void goster(struct ogrenci *p){
printf("Ogrenci Bilgi= %s %s %d\n",p->isim, p->soyisim,p->numara);

}


int main()
{
    struct ogrenci *tut;
    struct ogrenci ogrenci1={"Baha","Yolal",221};
    goster(&ogrenci1);
    tut=degerAl(&ogrenci1);// adres göndermeliyiz tek bir deðiþken olduðu için..

    printf("%s %s %d",tut->isim, tut->soyisim, tut->numara);

}
