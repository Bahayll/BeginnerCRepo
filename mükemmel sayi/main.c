#include <stdio.h>
#include <stdlib.h>
//1. Kendisi hariç bütün pozitif tamsayý çarpanlarýnýn toplamý kendisine eþit olan sayýlara
//mükemmel sayý denir. Örneðin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý toplamý
//1+2+4+7+14 = 28 olduðundan 28 sayýsý mükemmel bir sayýdýr. Buna göre klavyeden girilen
//bir sayýnýn mükemmel sayý olup olmadýðýný söylenen C programýný yazýnýz.

int main()
{
   int i, sayi, toplam=0;
   printf("Sayi Girin= ");
   scanf("%d",&sayi);
   for(i=1;i<sayi;i++){ // 1 den baþlatman lazým 0 olursa sayý döndürmezzz
    if(sayi%i==0){
        toplam += i;
   }
   }
   if(toplam==sayi){
    printf(" Mukemmel sayidir");
   }
   else{
      printf(" Mukemmel sayi degildir");
   }
   return 0;
}
