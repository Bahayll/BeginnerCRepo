#include <stdio.h>
#include <stdlib.h>
//Furkan, bir roman�n her g�n bir �nceki g�n okudu�u sayfadan 5 sayfa fazlas�n�
//okumaktad�r. �lk g�n 10 sayfa okuyarak ba�layan Furkan' �n 1.000 sayfal�k bir roman� ka�
//g�nde bitirece�ini bulan program� C dilinde kodlay�n�z
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
