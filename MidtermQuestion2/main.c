#include <stdio.h>
#include <stdlib.h>
// 0 dan n e kadar klavyeden girilen say�lar�n toplam�n� bulan �zyineli fonk


//  5 4 3 2 1 5+topla(4)
int topla(int a);
int main()
{
    int x;
    printf("Say� girin = ");
    scanf("%d, ", &x);
    if(x<0)
    else
    printf("Sonuc= %d'ye kadar olan say�lar�n toplam� %d", x , topla(x));
}
int topla(int a ){
    if(a==0 || a==1)
        return a;
    else
    return a + topla(a-1);
}
