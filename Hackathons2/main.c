#include <stdio.h>
#include <stdlib.h>

int length =0;

int tekrarlayan_sil(int sirali_dizi[]){
int count=0; // elimizde dizinin ba��nda s�ral� ve farkl� ka� eleman oldu�unu bilmemiz gerekli tek dizide �al��t���m�z i�in ilk ba�� yazd�raca��z
//a , b , c dizideki indeksleri temsil ediyor
int a=0,b=1,c=0; // c yazd�rd���m�z yeri tutan
                 // a b'yi kovalay�p s�rekli a b ye e�itmi yapmam�z gerekli link list mant���

for(int j=0 ; j<length;j++){ // diziyi dola��yoruz

    if(sirali_dizi[a]==sirali_dizi[b]){ // e�it ise birbirine hi� bir i�lem yapmadan kontrol de�i�kenlerimizi artt�r�yoruz
    b++;
    a++;
}
else // �it de�ilse
    if(a==0){ // bu kontrol� yapmam�z�n nedeni ilk ba�ta 1 2 geldi�i zaman �st�ne yazma de�il zaten s�ral� oldu�u i�in birnevi atl�yoruz bu ad�m� asl�nda
        a++;
        b++;
        c++;
        count++;
}
else  // burda as�l i�lemi yap�yoruz c yazmak istedi�imiz yerden bir �ncesini tutuyordu o y�zden c yi 1 artt�r�p c indisinin oldu�u yere b nin i�eri�ini yaz�yoruz
      // sonra count bir artt�rmam�z laz�m eleman say�s� i�in a ve b yide ilerletmemiz gerekli
{
    c++;
    sirali_dizi[c]=sirali_dizi[b];
    a++;
    b++;
    count++;
}

}

for(int i = 0; i<count;i++)
{

    printf("\nsirali dizi= %d",sirali_dizi[i]);
}




}





int main()
{
    int dizi[]={1,1,1,2,3,3,3,3,3,4,4,4,4,4,4,4,5,5,5,5,5,5,6,7,8,9,9,9,9,9,9,9,9,10,10,10,11};
    length = sizeof(dizi)/sizeof(dizi[0]);
    printf("dizi uzunlugu=%d\n",length);
    for(int i=0;i<length;i++){
        printf("%d",dizi[i]);
    }
    tekrarlayan_sil(dizi); //komple dizi g�nderdi�imiz i�in adres �zerinde i�lemler olur.
}
