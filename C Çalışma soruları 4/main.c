#include <stdio.h>
#include <stdlib.h>
//Furkan, bir romanýn her gün bir önceki gün okuduðu sayfadan 5 sayfa fazlasýný
//okumaktadýr. Ýlk gün 10 sayfa okuyarak baþlayan Furkan' ýn 1.000 sayfalýk bir romaný kaç
//günde bitireceðini bulan programý C dilinde kodlayýnýz
int main()
{
    int sayfa=10, gun=0, okunansayfa=0;
    while(okunansayfa<1000){
        okunansayfa += sayfa;
        sayfa +=5;
        gun++;
    }
    printf("%d. gunde bitirir", gun);
    return 0;
}
