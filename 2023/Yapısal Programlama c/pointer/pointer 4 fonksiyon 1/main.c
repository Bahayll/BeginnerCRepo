#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a=15, *aptr;
    aptr=&a;
    printf("a degiskeninin adresi = %p,\t degeri = %d \n",&a, a);
    printf("\n aptr pointerinin adresi = %p,\t tuttu�u adres = %p,\t pointerin tutugu deger= %d\n",&aptr, aptr,*aptr);

    fonk(aptr); // pointerler adres �zerinde i�lem yapt��� i�in yap�lan de�i�iklikler kal�c� olacak bu y�zden geri de�er d�nd�rmeye gerek yok ...

    printf("\n FONKSIYONDAN SONRA DEGERLER\n");

    printf("\n a degiskeninin adresi = %p,\t degeri = %d \n",&a, a);
    printf("\n aptr pointerinin adresi = %p,\t tuttugu adres = %p,\t pointerin tutugu deger= %d",&aptr, aptr,*aptr);

}

//pointer g�nderdik pointer kar��lamal�..
void fonk(int *ptr){

 printf("\n FONKSIYONDAN ICINDE DEGERLER\n");

 printf("\n ptr pointerinin adresi = %p,\t tuttu�u adres = %p,\t pointerin tutugu deger= %d",&ptr, ptr,*ptr);

 *ptr=*ptr + 5;

  printf("\n ptr pointerinin adresi = %p,\t tuttu�u adres = %p,\t pointerin tutugu deger= %d",&ptr, ptr,*ptr);



}


