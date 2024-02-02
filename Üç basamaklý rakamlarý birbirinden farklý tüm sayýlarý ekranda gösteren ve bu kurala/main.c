#include <stdio.h>
#include <stdlib.h>
//Üç basamaklý rakamlarý birbirinden farklý tüm sayýlarý ekranda gösteren ve bu kurala
//uygun kaç tane sayý olduðunu söyleyen C programýný yazýnýz. 250
int main()
{
    int i, a , b, c, sayac=0;
    for(i=100;i<999;i++){
        a= i/100; // yüzler basamaðý
        b= (i%100)/10; // onlar basamðý
        c= i%10;

        if (a!=b && b!=c && a!=c){
            printf("%5d", i);
            sayac++;
        }
    }
    printf("\n \n Bu kurala uygun %d sayi vardir", sayac);
    return 0;
}
