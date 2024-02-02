#include <stdio.h>
#include <stdlib.h>

int ZarAt();
int main()
{
   int zar1=0,zar2=0,zartop=0,puan=0;
   zar1=ZarAt();
   zar2=ZarAt();
   zartop=zar1+zar2;

   if(zartop==7 || zartop==11) printf("Kazandin");
   else{
    if(zartop==2 || zartop==3 || zartop==12) printf("\nKaybettin");
   else{
     puan = zartop;
     do{
        zar1=ZarAt();
        zar2=ZarAt();
        zartop=zar1+zar2;
        if(zartop==7){
            printf("\nKaybettin");
            break;
        }
             if(zartop==puan){
        printf("\nKazandin");
        break;
     }
     if(zartop==puan){
        printf("\nKazandin");
        break;
     }


     }while(zartop!=puan);


   }
   return 0;
}
}

int ZarAt(){

return (rand()%6)+1;
}
