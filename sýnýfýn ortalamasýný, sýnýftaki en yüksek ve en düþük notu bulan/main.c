#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
//20 kiþilik bir sýnýfta öðrencilerin bir dersten aldýðý notlar klavyeden girilecektir. Notlar
//girildikten sonra, sýnýfýn ortalamasýný, sýnýftaki en yüksek ve en düþük notu bulan ve ekranda
//gösteren programýn kodunu C diliyle yazýnýz.

int main()
{
    int d[SIZE], max,min,toplam=0,i;
    float ort=0;

    for(i=0;i<SIZE;i++){
        printf("%d.ogrencinin notunu girin= ",i+1);
        scanf("%d",&d[i]);
        toplam+=d[i];
    }
    ort=toplam/10.0;// toplam in ortalama float olduðundan 20 yi float olarak yazmalýyýzzz..
    printf("\nOrtalama= %f", ort);
    max=d[0];
    min=d[0];
    for(i=0;i<SIZE;i++){
        if(d[i]>max)
            max=d[i];
        if(d[i]<min)
            min=d[i];
    }
    printf("\n Max not= %d", max);
    printf("\n Min not= %d", min);

    return 0;
}
