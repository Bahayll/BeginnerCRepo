#include <stdio.h>
#include <stdlib.h>

int main()
{

   int sabit=20,sure=0,fat=0;

   printf("Sureyi Giriniz: ");
   scanf("%d",&sure);  // scanfte & koymassan progrram �al��maz scanf te  "&"  kullanmay� unutma sak�n !!!!!!

   if(sure<=100)
    fat=sabit;
   else
    fat=sabit+ (sure-100)*3 ;

   printf("%d",fat);


}
