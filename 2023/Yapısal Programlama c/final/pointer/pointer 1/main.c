#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  a=5, *aptr;
   aptr=&a; // bu ko�ulu yazmassak aptr nin i�inde de�er saklamam�� oluruz....


printf("a degiskeninin degeri= %d",a);//5
printf("\n a degiskeninin degeri= %d",a+1);//6


printf("\n a degiskeninin adresi= %p",&a);
printf("\n a degiskeninin adresi= %p",&a+1);// a de�iskenin adresi ne 1 ekledi�imiz zaman 4 byte artar c ise sonraki tam de�ere yuvarlan�r sonu 1c ise 20 olurr


printf("\n aptr pointerinin adresi = %p",&aptr);
printf("\n aptr pointerinin adresi = %p",&aptr+1); // pointer adresine 1 ekledi�imiz zaman 8 byte artar...


printf("\n aptr adl� pointer icinde tutulan adres = %p",aptr);// an�n adresine 1 ekliyormu�uz gibi olcak yani 4 byte artacak
printf("\n aptr adl� pointer icinde tutulan adres = %p",aptr+1);


printf("\n aptr adl� pointer icinde tutulan deger= %d",*aptr);// direk de�er art��� olcak ...
printf("\n aptr adl� pointer icinde tutulan deger= %d",*aptr+1);


    return 0;
}
