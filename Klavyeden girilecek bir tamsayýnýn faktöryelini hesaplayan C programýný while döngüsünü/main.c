#include <stdio.h>
#include <stdlib.h>
//Klavyeden girilecek bir tamsay�n�n fakt�ryelini hesaplayan C program�n� while d�ng�s�n�
//kullanarak yap�n�z.




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
