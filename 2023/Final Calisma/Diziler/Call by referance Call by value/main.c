
#include <stdio.h>
#include <stdlib.h>

// Call by Value (de�ere g�re �a��rma)
// Call by Referance (referans adrese g�re �a��rma)


/*
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1[2]);// tek eleman g�nderdei�imiz i�in tek de�er kar��l�yor dizinin t�m�n� g�ndermedik bu y�zden yapmak istedi�imizi yapmayacak bize yine 3 � verecek
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a){

  a=a*2;
}
*/

// geri de�er d�nd�rme ile ��zebiliriz
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
    fonk(d1);// fonksiyona dizinin t�m�n� g�nderiyoruz tek bir de�er g�ndermedik yani bu y�zden yap�lan i�lemler art�k de�er �zerinde de�il adres �zerinde ger�ekle�ecek
    //adres �zerinde ger�ekle�ti�inden geriye de�er d�nd�rmemize gerek kalmayacak kal�c� de�i�iklik yapm�� olaca��z zaten.
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a[]){

  a[2]*=2;
}
