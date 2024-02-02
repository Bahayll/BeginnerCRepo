#include <stdio.h>
#include <stdlib.h>

int count=0;

int basamaklarin_karesini_topla(int sayi){
   int basamak=0,toplam=0;
    // Basamaklarý bulmak için bir döngü
    while (sayi>0) {
    basamak = sayi % 10; // Son basamaðý bul
    sayi /= 10; // Bir basamak saða kaydýr
    toplam += basamak * basamak;

    }
    return toplam;
  }


int linear_search(int d[100],int aranan){

for(int i=0; i<count; i++){
    if(aranan==d[i]){
        return 0;
    }
}
 return 1;
}

int mutlu_sayi_bul(int a){
int donen_sayi;
int dizi[100];
dizi[0]=a;
for(int i =1; i<100; i++){
   donen_sayi=basamaklarin_karesini_topla(a);
      printf("%d   %d",a,donen_sayi);
   if(donen_sayi==1){
       printf("\nMutlu sayidir....");
       break;
   }
   else{
     if(linear_search(dizi,donen_sayi)== 1 ){

       a = donen_sayi;
       dizi[i]=donen_sayi;
       count++;
     }
     else {
        printf("\nMutlu sayi degildir..");
       break;
   }
   }
}
   return 0;
}

int main()
{
    int sayi;
    printf("Pozitif bir tam sayi giriniz= ");
    scanf("%d",&sayi);
    mutlu_sayi_bul(sayi);


}
