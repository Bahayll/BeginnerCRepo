#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    printf("Ay no gir:\n");
    scanf("%d",&ay);

while(ay>12|| ay<=0){
     printf("\n Hata, Tekrar Gir:\n");
     scanf("%d",&ay);
    }
   switch(ay){
   case 1 : printf("\n 1.ay 31 gun icerir."); break;
   case 2 : printf("\n 2.ay 28 gun icerir."); break;
   case 3 : printf("\n 3.ay 31 gun icerir."); break;
   case 4 : printf("\n 4.ay 30 gun icerir."); break;
   case 5 : printf("\n 5.ay 31 gun icerir."); break;
   case 6 : printf("\n 6.ay 30 gun icerir."); break;
   case 7 : printf("\n 7.ay 31 gun icerir."); break;
   case 8 : printf("\n 8.ay 31 gun icerir."); break;
   case 9 : printf("\n 9.ay 30 gun icerir."); break;
   case 10 : printf("\n 10.ay 31 gun icerir."); break;
   case 11 : printf("\n 11.ay 30 gun icerir."); break;
   case 12 : printf("\n 12.ay 31 gun icerir."); break;
}

    return 0;

    }
