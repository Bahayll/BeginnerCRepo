#include <stdio.h>
#include <stdlib.h>

int main()
{
  int para,yuzluk,ellilik,onluk,yirmilik;
  printf("Çekmek istediðiniz tutarý giriniz= ");
  scanf("%d", &para);
  if(para%10 != 0)
    printf("En kucuk 10tl lik bankot mevcut..");
  else{
    yuzluk=para/100;
    para=para- yuzluk*100;
    ellilik=para/50;
    para=para-ellilik*50;
    yirmilik=para/20;
    para=para-yirmilik*20;
    onluk=para/10;
    if(yuzluk>0)
        printf("%d tane 100TL \n",yuzluk);
    if(ellilik>0)
        printf("%d tane 50TL \n",ellilik);
    if(yirmilik>0)
        printf("%d tane 20TL \n",yirmilik);
    if(onluk>0)
        printf("%d tane 10TL \n",onluk);
  }
    return 0;
}
