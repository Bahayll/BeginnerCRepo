#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  a=5, *aptr;
   aptr=&a; // bu koþulu yazmassak aptr nin içinde deðer saklamamýþ oluruz....


printf("a degiskeninin degeri= %d",a);//5
printf("\n a degiskeninin degeri= %d",a+1);//6


printf("\n a degiskeninin adresi= %p",&a);
printf("\n a degiskeninin adresi= %p",&a+1);// a deðiskenin adresi ne 1 eklediðimiz zaman 4 byte artar c ise sonraki tam deðere yuvarlanýr sonu 1c ise 20 olurr


printf("\n aptr pointerinin adresi = %p",&aptr);
printf("\n aptr pointerinin adresi = %p",&aptr+1); // pointer adresine 1 eklediðimiz zaman 8 byte artar...


printf("\n aptr adlý pointer icinde tutulan adres = %p",aptr);// anýn adresine 1 ekliyormuþuz gibi olcak yani 4 byte artacak
printf("\n aptr adlý pointer icinde tutulan adres = %p",aptr+1);


printf("\n aptr adlý pointer icinde tutulan deger= %d",*aptr);// direk deðer artýþý olcak ...
printf("\n aptr adlý pointer icinde tutulan deger= %d",*aptr+1);


    return 0;
}
