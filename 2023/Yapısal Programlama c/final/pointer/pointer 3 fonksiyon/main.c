#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10, *aptr;
    aptr=&a;
    printf("a degiskeninin adresi = %p,\t degeri = %d",&a, a);
    printf("\n aptr pointerinin adresi = %p,\t tuttuðu adres = %p,\t pointerin tutugu deger= %d",&aptr, aptr,*aptr);
    fonk(aptr); // pointerler adres üzerinde iþlem yaptýðý için yapýlan deðiþiklikler kalýcý olacak bu yüzden geri deðer döndürmeye gerek yok ...
}

//pointer gönderdik pointer karþýlamalý..
void fonk(int *ptr){

 printf("\n ptr pointerinin adresi = %p,\t tuttuðu adres = %p,\t pointerin tutugu deger= %d",&ptr, ptr,*ptr);


}
