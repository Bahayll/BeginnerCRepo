#include <stdio.h>
#include <stdlib.h>

int main()
{
   int frekans[6]={0}; //ni�ic 0 a e�itledik
    //atama yapmazsan haf�zada hangi de�er varsa o gelir sallamasyon
   fonk(frekans);


   return 0;
}
int zarAT(){
    return rand()%6+1;
}
void fonk(int d[]){  // mainden dizi g�nderdik dizi kar��layacak dizinin tek eleman�n�
                    // g�ndersem e�er dizinin eleman� hangi veri tipindense o de�er kar��lamal�d�
                    // int tipinde olsun dizi eleman� int kar��lamal�yd�..

 for(int i=0;i<5;i++) {
    switch(zarAT()){
        case 1: d[0]++; break; // break koymazsan alttaki case otomatik girer switch cese i�in break �nemli
        case 2: d[1]++; break;
        case 3: d[2]++; break;
        case 4: d[3]++; break;
        case 5: d[4]++; break;
        case 6: d[5]++; break;

    }
 }

 for(int i=0; i<6; i++)     {
    if(d[i]==0) continue;  // burada neyi kontrol ediyoruz hi� gelmeyenleri yazd�rm�yoruz
    printf("\n%d sayisindan %d kadar gelmi�tir...",i,d[i]);
 }
}
