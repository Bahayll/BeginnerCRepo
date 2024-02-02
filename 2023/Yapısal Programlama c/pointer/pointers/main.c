#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a=5 , *aptr;  // integer türünde a diye bir deðiþken tuttuk ve bunu 5 e eþitledik, aptr adýnda bir pointer tanýmladýk yýldýz iþareti pointer iþaretidir her zaman belirtmelisin
    aptr=&a;  // a'nýn adresini aptr adlý poinetere tutturduk
    printf("a degiskeninin adresi= %p",&a);  // a deðiþkenin adresi için adres oporötörü ve adres yazdýracaðýmýz için yüzde p yi unutma
    printf("\naptr adresi= %p",&aptr);    // apt deðiþkenin adresi için baþýna adres oporötörü ve adres yazdýracaðýmýz için yüzde p yi unutma
    printf("\naptr icinde tutulan adres= %p", aptr);   // yukarýda a nýn adresini aptr ye tutturmuþtuk o yüzden direk aptr yi yazarak içindeki adresse eriþebiliriz ve adres olduðu için yüzde p kullan.
    printf("\naptr icinde tutulan deðer= %d", *aptr);  // aptr içinde tutulan deðer(a'nýn deðeri ) için yýldýz aptr kullanmalýsýn yani pointeri çaðýrmalýsýn gelecek deðer integer türünde olduðunudan
    // yüzde d ile çaðýrmalýsýn...
}

int main (){

int a=5 , *aptr;
aptr=&a;
printf("a degiskenin adresi= %p, degeri= %d",&a, a);
printf("\naptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&aptr, aptr, *aptr);
fonk(aptr); // herhangi bi þeyle tutulmadýðý için bu fonksiyon geri deðer döndermiyecek yani türü void olacak parametre olarakta bir pointer gönderdiðimiz için fonksiyondada pointer olmali
// yani fonksiyonda da adresi tutucak parametre olmalýý
return 0;
}
void fonk(int *ptr){ // pointer geldiði için pointerle karþýladýk
    printf("\nFonksiyon icinde degerler \n");
 printf("\nptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&ptr, ptr, *ptr);
 *ptr= *ptr +5; // pointerin içinde tuttuðu deðer üstünde iþlem yapýyoruz direk adresdeki deðerde deðiþiklik yaptýðýmýzdan global deðerde deðiþir.. a degiskenin adresi degiþmezz
 printf("\nptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&ptr, ptr, *ptr);
}
çýktý;


a degiskenin adresi= 000000000061FE1C, degeri= 5
aptr adresi= 000000000061FE10, tuttuug adres= 000000000061FE1C, tuttugu deger= 5
Fonksiyon icinde degerler

ptr adresi= 000000000061FDF0, tuttuug adres= 000000000061FE1C, tuttugu deger= 5
ptr adresi= 000000000061FDF0, tuttuug adres= 000000000061FE1C, tuttugu deger= 10



// gönderilen iki sayýdan hangisi büyük pointer yardýmýyla  bulduk.
void main (){
int a = 15;
int b = 92;
int *p; // poniter tanýmladýk
printf("\na=%d, b=%d",a,b);
printf("\n&a=%p, &b=%p &p= %p",&a,&b,&p);
p= larger(&a, &b); // fonksiyona a ve b deðiþkenlerinin adresini gönderdik bu yüzden fonksiyonda bizi adres tutabilecek bir yapý karþýlamalý yani pointer karþýlamalý
// fonksiyonu eþitlikte kullandýk bu yüzden bize geri deðer döndereceðini biliyoruz
printf("\n&p= %p, *p= %d\n",p,*p);
printf("\n%d is larger\n",*p);
}

int larger(int *x, int *y){ // int* koymamýzýn sebebi ben integer deðer tutan bir adres döndüreceðim diye belirtiyor.
printf("\n&x=%p, &y=%p\n",&x,&y);
printf("\nx=%p, y=%p\n",x,y);
printf("\n*x=%d, *y=%d\n",*x,*y);
if(*x > *y)
    return x;
else
    return y;

}
çýktý

a=15, b=92
&a=000000000061FE1C, &b=000000000061FE18 &p= 000000000061FE10
&x=000000000061FDF0, &y=000000000061FDF8

x=000000000061FE1C, y=000000000061FE18

*x=15, *y=92

&p= 000000000061FE18, *p= 92

92 is larger


//diziler - iþaretçiler her ikiside adres üzerinde iþlem yaptýklarýndan birbirleri yerine kullunýlabilirler.

int main(){
int a, *aptr, b[5], *bptr;
aptr=&a;  // a deðerinin adresini aptr adlý pointere tutturduk adres opörötörünü kullandýk
bptr=b; //  b dizisinin adresini bptr adlý pointere tutturduk adres opörötörü kullanmamýza gerek yok çünkü her ikiside adres üzerinde iþlem yapýyor.
printf("\n&a= %p, aptr=%p\n",&a,aptr);
printf("\n&b= %p, bptr=%p\n",&b,bptr);

}
ÇIKTI;

&a= 000000000061FE0C, aptr=000000000061FE0C

&b= 000000000061FDF0, bptr=000000000061FDF0



int main(){
int a=3, *aptr, *bptr;
int b[3]={10,20,30};
int i;
aptr=&a;  // a deðerinin adresini aptr adlý pointere tutturduk adres opörötörünü kullandýk
bptr=b; //  b dizisinin adresini bptr adlý pointere tutturduk adres opörötörü kullanmamýza gerek yok çünkü her ikiside adres üzerinde iþlem yapýyor.
printf("\n&a= %p, aptr=%p\n",&a,aptr);
printf("\n&b= %p, bptr=%p\n",&b,bptr);
printf("\nb[0]=%d, *bptr=%d\n", b[0],*bptr);
// bptr nin b dizisinin 2. elamanýný tutmasýný istiyorum

bptr=&b[1];  //  tek bir eleman tutmasýný istiyoruz yani iþ diziden çýktý artýk bu yüzden adres oporötörünü kullanmalýyýz.
printf("\n&b[1]=%p, b[1]=%d\n", &b[1],b[1]);
printf("\nbptr=%p, *bptr=%d\n", bptr,*bptr);
bptr++;
printf("\nbptr=%p, *bptr=%d\n", bptr,*bptr);
}
ÇIKTI;

&a= 000000000061FE0C, aptr=000000000061FE0C

&b= 000000000061FE00, bptr=000000000061FE00

b[0]=10, *bptr=10

&b[1]=000000000061FE04, b[1]=20

bptr=000000000061FE04, *bptr=20

bptr=000000000061FE08, *bptr=30



 //  DÝZÝ NOTASYONU [], OFSET NOTASYONU * KULLANARAK ÝÞLEM YAPMA

 // dizide pointerde adres tuttuðu için birbilerin yerine kullanýlabilirler
int main(){
 int d[3]={10,20,30}, *dptr, i;
 dptr=d; // dptr adlý pointer d dizimizin adresini tutuyor.
 for(i=0;i<3;i++)
    printf("%d, ",*(dptr+i));   10,20,30

dptr=d;  // her seferinde atama yapýyoruz çünkü dizimizin dýþýna çýkýyoruz her seferinde tekrar diziye girmeliyiz bu yüzden eþitlemek her seferin de yapýyoruz.
 for(i=0;i<3;i++)
    printf("%d, ",dptr[i]);  10,20,30

dptr=d;
 for(i=0;i<3;i++)
    printf("%d, ",*(d+i));   10,20,30
dptr=d;
 for(i=0;i<3;i++){
    printf("%d, ",*(dptr)); 10,20,30
    dptr++;  // buraya bunu koymazsan ve scope açmazsan for döngüsü için 10 10 10 üretir dikkat et.

}
}

int main(){
 int d[3]={10,20,30}, *dptr, i;
 dptr=d;
 for(i=0;i<3;i++)
    printf("%d, ",*dptr+i); 10 11 12 üretir..
}

*/
  // ÝKÝLÝ SIRALAMA POÝNTERLER ÝLE

  // a dizisini küçükten büyüðe sýralý hale getirmek istiyoruz.

void main(){

int a[9]={2,6,4,8,12,89,68,45,37}; // 9 elemanlý bir dizi tanýmladýk
int i;
sort1(a); // fonksiyona bir dizi gönderdik dizi gönderdiðimiz için bizi orda adres tutabilecek bir yapý karþýlamalý..
for(i=0;i<10;i++){
    printf("%d, ", a[i]); // a dizisinin elemanlarýnýn son halni yazdýracaðýz.
}
}
void sort1(int *aptr){ // geri deðer döndürmeyeceðiz çnkü adres üzerinde iþlem yapýyoruz yapacaðýmýz deðiþiklikler kalýcý olacak bu yüzden geri dönüþ yapmamýza gerek yok..
int i,j;
for(i=0;i<8;i++){
        for(i=0;i<8;i++){
        if(aptr[j]> aptr[j+1]) // 5.eleman 6.elemandan büyükse bunlarýn yeri deðiþmeli
            degis(&aptr[j],&aptr[j+1]); // yukardaki eðeri gerçekleþtirmek için degis adlý bir fonksiyona bu elemanlarýn adreslerini gönderiyoruzz
        }                                 // bunlar artýk tek bir deðiþken olduklarý için adreslerini göndermeliyiz baþlarýna adres iþaretlerini koymalýyýz..
}                                         // adres gönderdiðimiz için adresini karþýlayacak bir yapý lazým ..
}
 // 20 10
void degis(int *el1, int *el2){  // pointerlerle iþlem yapýyoruz yani iþlemler adres üzerinde ve kalýcý olacak..
int temp=*el1;   // iki sayýnýn yerini deðiþtirmek için 1.elemaný saklýyoruz kaybolmasýn diye bunu da temp adlý deðiþkene sakladýk.
*el1=*el2;         // 1 ve 2. elemanýn yerlerini deðiþtirdik
*el2=temp;  // tempin içindeki 1. elemaný tekrar 2 ye verdik böylelikle 1. eleman kaybolmamýþ ve yer deðiþtrmiþ oluyorlar

}
