#include <stdio.h>
#include <stdlib.h>

int length =0;

int tekrarlayan_sil(int sirali_dizi[]){
int count=0; // elimizde dizinin baþýnda sýralý ve farklý kaç eleman olduðunu bilmemiz gerekli tek dizide çalýþtýðýmýz için ilk baþý yazdýracaðýz
//a , b , c dizideki indeksleri temsil ediyor
int a=0,b=1,c=0; // c yazdýrdýðýmýz yeri tutan
                 // a b'yi kovalayýp sürekli a b ye eþitmi yapmamýz gerekli link list mantýðý

for(int j=0 ; j<length;j++){ // diziyi dolaþýyoruz

    if(sirali_dizi[a]==sirali_dizi[b]){ // eþit ise birbirine hiç bir iþlem yapmadan kontrol deðiþkenlerimizi arttýrýyoruz
    b++;
    a++;
}
else // þit deðilse
    if(a==0){ // bu kontrolü yapmamýzýn nedeni ilk baþta 1 2 geldiði zaman üstüne yazma deðil zaten sýralý olduðu için birnevi atlýyoruz bu adýmý aslýnda
        a++;
        b++;
        c++;
        count++;
}
else  // burda asýl iþlemi yapýyoruz c yazmak istediðimiz yerden bir öncesini tutuyordu o yüzden c yi 1 arttýrýp c indisinin olduðu yere b nin içeriðini yazýyoruz
      // sonra count bir arttýrmamýz lazým eleman sayýsý için a ve b yide ilerletmemiz gerekli
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
    tekrarlayan_sil(dizi); //komple dizi gönderdiðimiz için adres üzerinde iþlemler olur.
}
