#include <stdio.h>
#include <stdlib.h>


struct myVar { // structer türünde bir deðiþken tuttuk ve bunlar int a ve char c
int a;
char c;
}; // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalı virgül koymayı unutma!!


int main()
{
    struct myVar var1={2,'c'};            // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!
    struct myVar var2;                // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!
    var2.a=5;                      // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!
    var2.c='b';                  // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!
    struct myVar var3;              // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!
    scanf("%d",&var3.a);       // yukarda tanýmladýðýmýz a integer olduðundan yüzde d kullandýk scanf olduðundan adres oporötörü koyduk ve structer olduðunu belirmtek için nokta notasyonu koyduk araya...
    scanf("%c",&var3.c);     // yukarda tanýmladýðýmýz c char olduðundan yüzde c kullandýk scanf olduðundan adres oporötörü koyduk ve structer olduðunu belirmtek için nokta notasyonu koyduk araya...
    printf("var3.a=%d, var3.c=%c", var3.a ,var3.c);  // var ýn deðerlerini klavyeden istedik a integer odluðundan yüzde d kullandýk c char türünde olduðu için yüzde c kullandýk
    // structerlarda nokta notasyonunu kullanmayý unutma deðeri tutuyorlar aslýnd
}
/*

struct Calisan{
int id;
char isim[10];
}; // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!

int main (){
struct Calisan dizi [3]; // 3 çalýþaný bu diziyle tuttuk
int i;
for(i=0;i<3;i++){
    scanf("%d",&dizi[i].id); // id miz integer olduðundan yüzde d kullandýk structer olduðundan  nokta notasyonu yine kullandk
    scanf("%s", &dizi[i].isim);  // isimmiz char türünde fakat stringer olduðundan yüzde s kullandýk  structer olduðundan  nokta notasyonu yine kullandk
    // fakat burada adres oporötürü kullanmasakta olur çünkü hem stringer hemde dizi olduðundan sadece adres üzerinde iþlem yapýyoruz bu yüzden adres oporötürü kullanmak zorunda deðiliz
    // fakat sen her zaman kullan
}
for(i=0;i<3;i++){
    printf("\n%d.calisan icin isim=%s, id=%d",i+1, dizi[i].isim, dizi[i].id); // çalýþan sayýsý integer yüzde d kullandýk isim stringer türünden olacaðýndan yüzde s
    // id integer olduðundan yüzde d kullandýk hepsi structer olduðundna  nokta notasyonlarýný unutma
}

}

// yukardakini geliþtirip her çalýþana maaþ bilgisi atayacaðýz sonra kalvyeden id si girilen kiþinin maaþýný 2 kat arttýrabilecek bir fonksiyon yapacaðýz.



struct Calisan{
int id;
char isim[10];
int maas;            // ek olarak maas tutacaðýmýz için ekledik
};    // structerlarda sturctlarýn bittiðini göstermek için her zaman sonlarýna noktalý virgül koymayý unutma!!

int main (){
struct Calisan dizi [3];             // 3 çalýþaný bu diziyle tuttuk
int i, ara;              // zam idsi için ara adlý deðiþken tuttuk
for(i=0;i<3;i++){
    scanf("%d",&dizi[i].id);                // id miz integer olduðundan yüzde d kullandýk structer olduðundan  nokta notasyonu yine kullandk
    scanf("%s", &dizi[i].isim); // isimmiz char türünde fakat stringer olduðundan yüzde s kullandýk  structer olduðundan  nokta notasyonu yine kullandýk
    scanf("%d", &dizi[i].maas);  // maas bilgisini istedik
    // fakat burada adres oporötürü kullanmasakta olur çünkü hem stringer hemde dizi olduðundan sadece adres üzerinde iþlem yapýyoruz bu yüzden adres oporötürü kullanmak zorunda deðiliz
    // fakat sen her zaman kullan
}
printf("\n Zam alacak id girin;\n");
scanf("%d", &ara);
fonk(dizi, ara); // maaþ zamý için fonk tuttuk fakat hem diziyi hem de id göndermek için 2 deðiþkenli olmalý geri deðer döndürmeyecek o yüzden böyle yazdýk void türünde fonk olcak
for(i=0;i<3;i++){
    printf("\n%d.calisan icin isim=%s, id=%d, maas=%d",i+1, dizi[i].isim, dizi[i].id, dizi[i].maas);        // çalýþan sayýsý integer yüzde d kullandýk isim stringer türünden olacaðýndan yüzde s
    // id integer olduðundan yüzde d kullandýk hepsi structer olduðundna  nokta notasyonlarýný unutma
}

}

void fonk(struct Calisan d[3], int ara){
int i;
for(i=0;i<3;i++){
    if(d[i].id==ara) // girilen id ile dizideki idler eþitmi onu kontrol ettik
        d[i].maas*=2 ;// dizi içerisindeki maaþ alanýný ikiyle çarptýk
}

}
// dizi gönderdiðimiz için iþlemler adreste yapýlacak yapýlacak olan deðiþikleri adreste olduðundan kalýcý olacak bu yüzden geri deðer döndürmemize gerek yok o yüzden void yaptýk
// yani return kullanmamýza gerek yok (call by refarence)

*/
