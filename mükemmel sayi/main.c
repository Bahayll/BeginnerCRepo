#include <stdio.h>
#include <stdlib.h>
//1. Kendisi hari� b�t�n pozitif tamsay� �arpanlar�n�n toplam� kendisine e�it olan say�lara
//m�kemmel say� denir. �rne�in, 28 say�s�n�n kendisi hari� pozitif �arpanlar� toplam�
//1+2+4+7+14 = 28 oldu�undan 28 say�s� m�kemmel bir say�d�r. Buna g�re klavyeden girilen
//bir say�n�n m�kemmel say� olup olmad���n� s�ylenen C program�n� yaz�n�z.

int main()
{
   int i, sayi, toplam=0;
   printf("Sayi Girin= ");
   scanf("%d",&sayi);
   for(i=1;i<sayi;i++){ // 1 den ba�latman laz�m 0 olursa say� d�nd�rmezzz
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
