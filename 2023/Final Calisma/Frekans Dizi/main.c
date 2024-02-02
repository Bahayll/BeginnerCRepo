#include <stdio.h>
#include <stdlib.h>

int main()
{
   int frekans[6]={0}; //niçic 0 a eþitledik
    //atama yapmazsan hafýzada hangi deðer varsa o gelir sallamasyon
   fonk(frekans);


   return 0;
}
int zarAT(){
    return rand()%6+1;
}
void fonk(int d[]){  // mainden dizi gönderdik dizi karþýlayacak dizinin tek elemanýný
                    // göndersem eðer dizinin elemaný hangi veri tipindense o deðer karþýlamalýdý
                    // int tipinde olsun dizi elemaný int karþýlamalýydý..

 for(int i=0;i<5;i++) {
    switch(zarAT()){
        case 1: d[0]++; break; // break koymazsan alttaki case otomatik girer switch cese için break önemli
        case 2: d[1]++; break;
        case 3: d[2]++; break;
        case 4: d[3]++; break;
        case 5: d[4]++; break;
        case 6: d[5]++; break;

    }
 }

 for(int i=0; i<6; i++)     {
    if(d[i]==0) continue;  // burada neyi kontrol ediyoruz hiç gelmeyenleri yazdýrmýyoruz
    printf("\n%d sayisindan %d kadar gelmiþtir...",i,d[i]);
 }
}
