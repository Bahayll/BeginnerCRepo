#include <stdio.h>
#include <stdlib.h>
//Klavyeden girilecek bir tamsayının faktöryelini hesaplayan C programını while döngüsünü
//kullanarak yapınız.




int main()
{
  int faktryel=1 , sayi;
  printf("Sayi girin= " );
  scanf("%d", &sayi);
  while(sayi>0){
    faktryel *= sayi;
    sayi--;

  }
  printf("Faktoriyle=%d", faktryel);
    return 0;
}
