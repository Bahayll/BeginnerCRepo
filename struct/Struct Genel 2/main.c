#include <stdio.h>
#include <stdlib.h>



//  struct ogrenci yi int fonksiyon gibi d���n int yazd���n yere struct ogrenci yaz gitsin...
struct ogrenci{
 char isim [10];
 char soyisim[10];
 int numara;
};
struct ogrenci degerAl()// fonksiyon geri de�er d�nd�rs�n istiyoruz int tipinde fonksiyonlarda yap�t���m�z gibi struct de�erleri i�inde struct ogrenci tipinde geri de�er d�nd�rmeli
// bu y�zden fonksiyon struct ogrenci tipinde olmal�d�rr.
{

    struct ogrenci yeni; // ayn� mainde oldu�u gibi burdada nesne belirlemeliyiz ki i�lemleri onun �zerinden yapabilielim
    printf("Bilgilerini Girin=  ");
    scanf("%s  %s  %d", &yeni.isim, &yeni.soyisim, &yeni.numara); // structlarda nokta notasyonunu unutma // scanf te & op�rotorunu unutma

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
