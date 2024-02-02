#include <stdio.h>
#include <stdlib.h>



#include <string.h> // bu iki haz�r k�t�phane stringler i�in haz�r kodlar ve fonksiyonlar� i�eriyor.
#include <ctype.h>
/*
int main()
{
int s;
    char isim[5]; // char t�r�nden 5 elemanl� isim adl� bir dizi olu�turduk
    scanf("%s",&s);  // bu dizinin elemanlar�n� klavyeden istedik ve t�rleri string olaca�� i�in y�zde s olarak belirttik ayn� zamanda scanf oldu�unda adres & opor�t�r�n� kulland�k.
    printf("%s", s);  // klavyeden girilen elemanlar� yazd�r�ca��z bakal�m  nolcak
    return 0;

    }
 // isim de�i�kenine 8 karakter girdi�imizde girilen karakterler ard���k olarak yaz�lmaya devam eder ��nki \0 ile bu diziyi sonland�rmad�k
 // stringlerde en �nemlisi tek t�rnakl� i�lemlerde \0 ile diziyi sonland�rmal�y�z bunu nas�l ��zeriz peki
 //              scanf("%4s", &isim); �eklinde yaparsak 4 eleman i�in yer ay�rm�� olaca��z 5. eleman \0 olmal� ��nki

 int main()
{
    char isim[5]; // char t�r�nden 5 elemanl� isim adl� bir dizi olu�turduk
    scanf("%4s",&isim);  // bu dizinin elemanlar�n� klavyeden istedik ve t�rleri string olaca�� i�in y�zde s olarak belirttik ayn� zamanda scanf oldu�unda adres & opor�t�r�n� kulland�k.
    // ayr�ca \0 i�inde 4s yaparak yer ay�rd�k 4 eleman kabul ettik son eleman�m�z \0 olmal�
    printf("%s", isim);  // klavyeden girilen elemanlar� yazd�r�ca��z bakal�m  nolcak
    return 0;

    }


int main (){
char str1="can", str2="Can", str3="ali", str4="can";
scanf("%s", &str1);
printf("%d",strcmp(str1,str2));
printf("%d",strcmp(str1,str3));
printf("%d",strcmp(str1,str4));
printf("%d",strcmp(str2,str3));
return 0 ;


}
*/

// girilen bir stringteki b�y�k harfleri k����e k���kleride b�y��e �evirdikten sonra bu string'i tersten yeni bir stringe kopyalayan bir program yaz�n�z
//- b�y�k k���k d�n���m� - tersten kopyalama


int main(){
   char s1[25], s2[25];
   int uz=0, i=0, j, flag=0;
   scanf("%s", &s1);


   while(s1[i]!='\0'){ //d�ng�n�n sonuna kadar devam etmesi i�in ko�ul yazd�k
     if(islower(s1[i])){ // k���k is
        s1[i]=toupper(s1[i]); // b�y��e �evir
        flag=1;  // flag tan�mlad�k ��nki flag olmad��� zaman ayn� say� 2 ife birden girer mesela a tan�mlad���m�zda b�y�k olacak ilk iften ��k�nca sonra di�er ifte k���lcek bir anlam� kalmicak
     }
    if(flag!=1 && isupper(s1[i])) // b�y�k ise
         s1[i]=tolower(s1[i]);   // k����e �evir
    i++; // indexi 1 er 1 er artt�r�yoruz d�ng� ilerlemesi i�in
    uz++; // uzunluk tan�mlad�k ��nki dizinin ne kadar uzunlukta olaca��n� bilmiyoruz t�m diziyi zaten dola��yoruz uzunluk tan�mlay�p dizi uzunlu�undan ters �evirme i�lemini kolayca yapabiliriz.
   }
   j=uz-1; // \0 karakteriniz ��kartt�k.
   for(i=0;i<uz;i++){
    s2[i]=s1[j]; // bo� dizi s2 bu diziyi s1 i tersini yazaca��z
    j--; // uzunluk tuttuk dizinin sonunu bilmek i�in en sondan ba�lay�p 1 er 1 er azalt�yoruz dizinin ba��na do�ru gidiyoruz
   }

   s2[i]='\0'; // dizinin bitti�ini belirtmek i�in koymal�y�z.
   printf("%s",s2);

}
// bu programda hata var k���kleri b�y��e �eviriyor lakin baz� b�y�k harfleri k����e �evirmiyor
