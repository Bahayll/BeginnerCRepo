#include <stdio.h>
#include <stdlib.h>


//              Call by Reference

// herhangi bir geri döndürme yok
// dizi üstünde adres üzerinde deðiþiklik yapýyoruz bu yüzden geri deðer döndürmemize gerek
// kalmayacak dizi üzerinde yapýlan iþlemler kalýcý olur..
// dikkat edilmesi gerekn nokta dizi üzerinde deðiþiklik olacaðýndan fonksiyona komple
// dizi gönderilmeli.....
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1);
    printf("%d",d1[2]);
    return 0;
}
void fonk(int a[]){
a[2]*=2;
}
