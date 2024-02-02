
#include <stdio.h>
#include <stdlib.h>

// Call by Value (deðere göre çaðýrma)
// Call by Referance (referans adrese göre çaðýrma)


/*
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1[2]);// tek eleman gönderdeiðimiz için tek deðer karþýlýyor dizinin tümünü göndermedik bu yüzden yapmak istediðimizi yapmayacak bize yine 3 ü verecek
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a){

  a=a*2;
}
*/

// geri deðer döndürme ile çözebiliriz
/*
int main()
{
    int d1[5]={1,2,3,4,5};
    d1[2]=fonk(d1[2]);
    printf("%d",d1[2]);
    return 0;
}

int fonk(int a){

  return a*2;
}
*/
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1);// fonksiyona dizinin tümünü gönderiyoruz tek bir deðer göndermedik yani bu yüzden yapýlan iþlemler artýk deðer üzerinde deðil adres üzerinde gerçekleþecek
    //adres üzerinde gerçekleþtiðinden geriye deðer döndürmemize gerek kalmayacak kalýcý deðiþiklik yapmýþ olacaðýz zaten.
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a[]){

  a[2]*=2;
}
