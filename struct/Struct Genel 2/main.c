#include <stdio.h>
#include <stdlib.h>



//  struct ogrenci yi int fonksiyon gibi düþün int yazdýðýn yere struct ogrenci yaz gitsin...
struct ogrenci{
 char isim [10];
 char soyisim[10];
 int numara;
};
struct ogrenci degerAl()// fonksiyon geri deðer döndürsün istiyoruz int tipinde fonksiyonlarda yapýtýðýmýz gibi struct deðerleri içinde struct ogrenci tipinde geri deðer döndürmeli
// bu yüzden fonksiyon struct ogrenci tipinde olmalýdýrr.
{

    struct ogrenci yeni; // ayný mainde olduðu gibi burdada nesne belirlemeliyiz ki iþlemleri onun üzerinden yapabilielim
    printf("Bilgilerini Girin=  ");
    scanf("%s  %s  %d", &yeni.isim, &yeni.soyisim, &yeni.numara); // structlarda nokta notasyonunu unutma // scanf te & opörotorunu unutma

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
