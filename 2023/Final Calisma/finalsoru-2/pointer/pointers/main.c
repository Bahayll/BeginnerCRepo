#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a=5 , *aptr;  // integer t�r�nde a diye bir de�i�ken tuttuk ve bunu 5 e e�itledik, aptr ad�nda bir pointer tan�mlad�k y�ld�z i�areti pointer i�aretidir her zaman belirtmelisin
    aptr=&a;  // a'n�n adresini aptr adl� poinetere tutturduk
    printf("a degiskeninin adresi= %p",&a);  // a de�i�kenin adresi i�in adres opor�t�r� ve adres yazd�raca��m�z i�in y�zde p yi unutma
    printf("\naptr adresi= %p",&aptr);    // apt de�i�kenin adresi i�in ba��na adres opor�t�r� ve adres yazd�raca��m�z i�in y�zde p yi unutma
    printf("\naptr icinde tutulan adres= %p", aptr);   // yukar�da a n�n adresini aptr ye tutturmu�tuk o y�zden direk aptr yi yazarak i�indeki adresse eri�ebiliriz ve adres oldu�u i�in y�zde p kullan.
    printf("\naptr icinde tutulan de�er= %d", *aptr);  // aptr i�inde tutulan de�er(a'n�n de�eri ) i�in y�ld�z aptr kullanmal�s�n yani pointeri �a��rmal�s�n gelecek de�er integer t�r�nde oldu�unudan
    // y�zde d ile �a��rmal�s�n...
}

int main (){

int a=5 , *aptr;
aptr=&a;
printf("a degiskenin adresi= %p, degeri= %d",&a, a);
printf("\naptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&aptr, aptr, *aptr);
fonk(aptr); // herhangi bi �eyle tutulmad��� i�in bu fonksiyon geri de�er d�ndermiyecek yani t�r� void olacak parametre olarakta bir pointer g�nderdi�imiz i�in fonksiyondada pointer olmali
// yani fonksiyonda da adresi tutucak parametre olmal��
return 0;
}
void fonk(int *ptr){ // pointer geldi�i i�in pointerle kar��lad�k
    printf("\nFonksiyon icinde degerler \n");
 printf("\nptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&ptr, ptr, *ptr);
 *ptr= *ptr +5; // pointerin i�inde tuttu�u de�er �st�nde i�lem yap�yoruz direk adresdeki de�erde de�i�iklik yapt���m�zdan global de�erde de�i�ir.. a degiskenin adresi degi�mezz
 printf("\nptr adresi= %p, tuttuug adres= %p, tuttugu deger= %d",&ptr, ptr, *ptr);
}
��kt�;


a degiskenin adresi= 000000000061FE1C, degeri= 5
aptr adresi= 000000000061FE10, tuttuug adres= 000000000061FE1C, tuttugu deger= 5
Fonksiyon icinde degerler

ptr adresi= 000000000061FDF0, tuttuug adres= 000000000061FE1C, tuttugu deger= 5
ptr adresi= 000000000061FDF0, tuttuug adres= 000000000061FE1C, tuttugu deger= 10



// g�nderilen iki say�dan hangisi b�y�k pointer yard�m�yla  bulduk.
void main (){
int a = 15;
int b = 92;
int *p; // poniter tan�mlad�k
printf("\na=%d, b=%d",a,b);
printf("\n&a=%p, &b=%p &p= %p",&a,&b,&p);
p= larger(&a, &b); // fonksiyona a ve b de�i�kenlerinin adresini g�nderdik bu y�zden fonksiyonda bizi adres tutabilecek bir yap� kar��lamal� yani pointer kar��lamal�
// fonksiyonu e�itlikte kulland�k bu y�zden bize geri de�er d�nderece�ini biliyoruz
printf("\n&p= %p, *p= %d\n",p,*p);
printf("\n%d is larger\n",*p);
}

int larger(int *x, int *y){ // int* koymam�z�n sebebi ben integer de�er tutan bir adres d�nd�rece�im diye belirtiyor.
printf("\n&x=%p, &y=%p\n",&x,&y);
printf("\nx=%p, y=%p\n",x,y);
printf("\n*x=%d, *y=%d\n",*x,*y);
if(*x > *y)
    return x;
else
    return y;

}
��kt�

a=15, b=92
&a=000000000061FE1C, &b=000000000061FE18 &p= 000000000061FE10
&x=000000000061FDF0, &y=000000000061FDF8

x=000000000061FE1C, y=000000000061FE18

*x=15, *y=92

&p= 000000000061FE18, *p= 92

92 is larger


//diziler - i�aret�iler her ikiside adres �zerinde i�lem yapt�klar�ndan birbirleri yerine kullun�labilirler.

int main(){
int a, *aptr, b[5], *bptr;
aptr=&a;  // a de�erinin adresini aptr adl� pointere tutturduk adres op�r�t�r�n� kulland�k
bptr=b; //  b dizisinin adresini bptr adl� pointere tutturduk adres op�r�t�r� kullanmam�za gerek yok ��nk� her ikiside adres �zerinde i�lem yap�yor.
printf("\n&a= %p, aptr=%p\n",&a,aptr);
printf("\n&b= %p, bptr=%p\n",&b,bptr);

}
�IKTI;

&a= 000000000061FE0C, aptr=000000000061FE0C

&b= 000000000061FDF0, bptr=000000000061FDF0



int main(){
int a=3, *aptr, *bptr;
int b[3]={10,20,30};
int i;
aptr=&a;  // a de�erinin adresini aptr adl� pointere tutturduk adres op�r�t�r�n� kulland�k
bptr=b; //  b dizisinin adresini bptr adl� pointere tutturduk adres op�r�t�r� kullanmam�za gerek yok ��nk� her ikiside adres �zerinde i�lem yap�yor.
printf("\n&a= %p, aptr=%p\n",&a,aptr);
printf("\n&b= %p, bptr=%p\n",&b,bptr);
printf("\nb[0]=%d, *bptr=%d\n", b[0],*bptr);
// bptr nin b dizisinin 2. elaman�n� tutmas�n� istiyorum

bptr=&b[1];  //  tek bir eleman tutmas�n� istiyoruz yani i� diziden ��kt� art�k bu y�zden adres opor�t�r�n� kullanmal�y�z.
printf("\n&b[1]=%p, b[1]=%d\n", &b[1],b[1]);
printf("\nbptr=%p, *bptr=%d\n", bptr,*bptr);
bptr++;
printf("\nbptr=%p, *bptr=%d\n", bptr,*bptr);
}
�IKTI;

&a= 000000000061FE0C, aptr=000000000061FE0C

&b= 000000000061FE00, bptr=000000000061FE00

b[0]=10, *bptr=10

&b[1]=000000000061FE04, b[1]=20

bptr=000000000061FE04, *bptr=20

bptr=000000000061FE08, *bptr=30



 //  D�Z� NOTASYONU [], OFSET NOTASYONU * KULLANARAK ��LEM YAPMA

 // dizide pointerde adres tuttu�u i�in birbilerin yerine kullan�labilirler
int main(){
 int d[3]={10,20,30}, *dptr, i;
 dptr=d; // dptr adl� pointer d dizimizin adresini tutuyor.
 for(i=0;i<3;i++)
    printf("%d, ",*(dptr+i));   10,20,30

dptr=d;  // her seferinde atama yap�yoruz ��nk� dizimizin d���na ��k�yoruz her seferinde tekrar diziye girmeliyiz bu y�zden e�itlemek her seferin de yap�yoruz.
 for(i=0;i<3;i++)
    printf("%d, ",dptr[i]);  10,20,30

dptr=d;
 for(i=0;i<3;i++)
    printf("%d, ",*(d+i));   10,20,30
dptr=d;
 for(i=0;i<3;i++){
    printf("%d, ",*(dptr)); 10,20,30
    dptr++;  // buraya bunu koymazsan ve scope a�mazsan for d�ng�s� i�in 10 10 10 �retir dikkat et.

}
}

int main(){
 int d[3]={10,20,30}, *dptr, i;
 dptr=d;
 for(i=0;i<3;i++)
    printf("%d, ",*dptr+i); 10 11 12 �retir..
}

*/
  // �K�L� SIRALAMA PO�NTERLER �LE

  // a dizisini k���kten b�y��e s�ral� hale getirmek istiyoruz.

void main(){

int a[9]={2,6,4,8,12,89,68,45,37}; // 9 elemanl� bir dizi tan�mlad�k
int i;
sort1(a); // fonksiyona bir dizi g�nderdik dizi g�nderdi�imiz i�in bizi orda adres tutabilecek bir yap� kar��lamal�..
for(i=0;i<10;i++){
    printf("%d, ", a[i]); // a dizisinin elemanlar�n�n son halni yazd�raca��z.
}
}
void sort1(int *aptr){ // geri de�er d�nd�rmeyece�iz �nk� adres �zerinde i�lem yap�yoruz yapaca��m�z de�i�iklikler kal�c� olacak bu y�zden geri d�n�� yapmam�za gerek yok..
int i,j;
for(i=0;i<8;i++){
        for(i=0;i<8;i++){
        if(aptr[j]> aptr[j+1]) // 5.eleman 6.elemandan b�y�kse bunlar�n yeri de�i�meli
            degis(&aptr[j],&aptr[j+1]); // yukardaki e�eri ger�ekle�tirmek i�in degis adl� bir fonksiyona bu elemanlar�n adreslerini g�nderiyoruzz
        }                                 // bunlar art�k tek bir de�i�ken olduklar� i�in adreslerini g�ndermeliyiz ba�lar�na adres i�aretlerini koymal�y�z..
}                                         // adres g�nderdi�imiz i�in adresini kar��layacak bir yap� laz�m ..
}
 // 20 10
void degis(int *el1, int *el2){  // pointerlerle i�lem yap�yoruz yani i�lemler adres �zerinde ve kal�c� olacak..
int temp=*el1;   // iki say�n�n yerini de�i�tirmek i�in 1.eleman� sakl�yoruz kaybolmas�n diye bunu da temp adl� de�i�kene saklad�k.
*el1=*el2;         // 1 ve 2. eleman�n yerlerini de�i�tirdik
*el2=temp;  // tempin i�indeki 1. eleman� tekrar 2 ye verdik b�ylelikle 1. eleman kaybolmam�� ve yer de�i�trmi� oluyorlar

}
