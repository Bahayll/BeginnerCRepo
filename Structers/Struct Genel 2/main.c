#include <stdio.h>
#include <stdlib.h>




struct ogrenci{
 char isim [10];
 char soyisim[10];
 int numara;
};
struct ogrenci degerAl()
{

    struct ogrenci yeni; 
    printf("Bilgilerini Girin=  ");
    scanf("%s  %s  %d", &yeni.isim, &yeni.soyisim, &yeni.numara); 

    return yeni;

}
void goster(struct ogrenci a){

printf("Ogrenci bilgileri=  %s  %s  %d", a.isim, a.soyisim, a.numara);

}






int main()
{
    struct ogrenci ogrenci1=degerAl();
    goster(ogrenci1);
    return 0;
}
