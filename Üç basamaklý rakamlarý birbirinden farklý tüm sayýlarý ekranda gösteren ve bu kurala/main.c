#include <stdio.h>
#include <stdlib.h>
//�� basamakl� rakamlar� birbirinden farkl� t�m say�lar� ekranda g�steren ve bu kurala
//uygun ka� tane say� oldu�unu s�yleyen C program�n� yaz�n�z. 250
int main()
{
    int i, a , b, c, sayac=0;
    for(i=100;i<999;i++){
        a= i/100; // y�zler basama��
        b= (i%100)/10; // onlar basam��
        c= i%10;

        if (a!=b && b!=c && a!=c){
            printf("%5d", i);
            sayac++;
        }
    }
    printf("\n \n Bu kurala uygun %d sayi vardir", sayac);
    return 0;
}
