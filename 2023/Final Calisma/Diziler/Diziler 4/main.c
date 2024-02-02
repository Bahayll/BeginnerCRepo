#include <stdio.h>
#include <stdlib.h>


// call by value, call by reference,,,,,
/*
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk (d1[2]);
    printf("%d",d1[2]);
    return 0;

}
void fonk(int a ){

a=a*2;

}
// dizinin bir tek elemanýný gönderdik bu yüzden iþ diziden çýkar yani iþlemler adres üzerinde olmadýðýndan yapýlan deðiþiklikler kalýcý olmaz
// bu yüzden yapýlan deðiþikliklerin kalýcý olmasýný istiyorsak tek eleman gönderdiðimizde bize geri bir deðer döndürmeli yani geri deðer döndüren fonk tipi ve return kullanmalýyýz...
*/

int main()
{
    int d1[5]={1,2,3,4,5};
    d1[2]=fonk (d1[2]);
    printf("%d",d1[2]);
    return 0;

}
int fonk(int a ){

return a*2;
}
