#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
//20 ki�ilik bir s�n�fta ��rencilerin bir dersten ald��� notlar klavyeden girilecektir. Notlar
//girildikten sonra, s�n�f�n ortalamas�n�, s�n�ftaki en y�ksek ve en d���k notu bulan ve ekranda
//g�steren program�n kodunu C diliyle yaz�n�z.

int main()
{
    int d[SIZE], max,min,toplam=0,i;
    float ort=0;

    for(i=0;i<SIZE;i++){
        printf("%d.ogrencinin notunu girin= ",i+1);
        scanf("%d",&d[i]);
        toplam+=d[i];
    }
    ort=toplam/10.0;// toplam in ortalama float oldu�undan 20 yi float olarak yazmal�y�zzz..
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
