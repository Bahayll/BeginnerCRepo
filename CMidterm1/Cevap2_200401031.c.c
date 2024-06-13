#include <stdio.h>
#include <stdlib.h>



int rastgelefonk(){

     int sayi,tahmin;
     sayi= (rand()% 99)+1;
       do{
        printf("Tahmin Gir:\n ");
        scanf("%d",&tahmin);
           if(tahmin<sayi)
              printf("Daha Buyuk Tahmin Yap");

           if(tahmin>sayi)
            printf("Daha Kucuk Tahmin Yap");


       }while(tahmin!=sayi);

        printf("Tebrikler Bildiniz.\n");
        DevamFonk();

    return 0;
  }

  int main() {
   rastgelefonk();

return 0 ;
}

int DevamFonk()
{
  int t;
  printf("Devam (1) Bitir(-1):\n");
  scanf("%d",&t);
    if(t==1)
       rastgelefonk();
    if(t==-1)
        return 0;
}





