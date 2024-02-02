#include <stdio.h>
#include <stdlib.h>



#include <string.h> // bu iki hazýr kütüphane stringler için hazýr kodlar ve fonksiyonlarý içeriyor.
#include <ctype.h>
/*
int main()
{
int s;
    char isim[5]; // char türünden 5 elemanlý isim adlý bir dizi oluþturduk
    scanf("%s",&s);  // bu dizinin elemanlarýný klavyeden istedik ve türleri string olacaðý için yüzde s olarak belirttik ayný zamanda scanf olduðunda adres & oporötörünü kullandýk.
    printf("%s", s);  // klavyeden girilen elemanlarý yazdýrýcaðýz bakalým  nolcak
    return 0;

    }
 // isim deðiþkenine 8 karakter girdiðimizde girilen karakterler ardýþýk olarak yazýlmaya devam eder çünki \0 ile bu diziyi sonlandýrmadýk
 // stringlerde en önemlisi tek týrnaklý iþlemlerde \0 ile diziyi sonlandýrmalýyýz bunu nasýl çözeriz peki
 //              scanf("%4s", &isim); þeklinde yaparsak 4 eleman için yer ayýrmýþ olacaðýz 5. eleman \0 olmalý çünki

 int main()
{
    char isim[5]; // char türünden 5 elemanlý isim adlý bir dizi oluþturduk
    scanf("%4s",&isim);  // bu dizinin elemanlarýný klavyeden istedik ve türleri string olacaðý için yüzde s olarak belirttik ayný zamanda scanf olduðunda adres & oporötörünü kullandýk.
    // ayrýca \0 içinde 4s yaparak yer ayýrdýk 4 eleman kabul ettik son elemanýmýz \0 olmalý
    printf("%s", isim);  // klavyeden girilen elemanlarý yazdýrýcaðýz bakalým  nolcak
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

// girilen bir stringteki büyük harfleri küçüðe küçükleride büyüðe çevirdikten sonra bu string'i tersten yeni bir stringe kopyalayan bir program yazýnýz
//- büyük küçük dönüþümü - tersten kopyalama


int main(){
   char s1[25], s2[25];
   int uz=0, i=0, j, flag=0;
   scanf("%s", &s1);


   while(s1[i]!='\0'){ //döngünün sonuna kadar devam etmesi için koþul yazdýk
     if(islower(s1[i])){ // küçük is
        s1[i]=toupper(s1[i]); // büyüðe çevir
        flag=1;  // flag tanýmladýk çünki flag olmadýðý zaman ayný sayý 2 ife birden girer mesela a tanýmladýðýmýzda büyük olacak ilk iften çýkýnca sonra diðer ifte küçülcek bir anlamý kalmicak
     }
    if(flag!=1 && isupper(s1[i])) // büyük ise
         s1[i]=tolower(s1[i]);   // küçüðe çevir
    i++; // indexi 1 er 1 er arttýrýyoruz döngü ilerlemesi için
    uz++; // uzunluk tanýmladýk çünki dizinin ne kadar uzunlukta olacaðýný bilmiyoruz tüm diziyi zaten dolaþýyoruz uzunluk tanýmlayýp dizi uzunluðundan ters çevirme iþlemini kolayca yapabiliriz.
   }
   j=uz-1; // \0 karakteriniz çýkarttýk.
   for(i=0;i<uz;i++){
    s2[i]=s1[j]; // boþ dizi s2 bu diziyi s1 i tersini yazacaðýz
    j--; // uzunluk tuttuk dizinin sonunu bilmek için en sondan baþlayýp 1 er 1 er azaltýyoruz dizinin baþýna doðru gidiyoruz
   }

   s2[i]='\0'; // dizinin bittiðini belirtmek için koymalýyýz.
   printf("%s",s2);

}
// bu programda hata var küçükleri büyüðe çeviriyor lakin bazý büyük harfleri küçüðe çevirmiyor
