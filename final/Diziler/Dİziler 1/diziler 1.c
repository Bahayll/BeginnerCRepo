
#include <stdio.h>
#include <stdlib.h>

// Call by Value (de�ere g�re �a��rma)
// Call by Referance (referans adrese g�re �a��rma)
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk(d1[2]);// tek eleman g�nderdei�imiz i�in tek de�er kar��l�yor dizinin t�m�n� g�ndermedik bu y�zden yapmak istedi�imizi yapmayacak
    printf("%d",d1[2]);
    return 0;
}

void fonk(int a){

a=a*2;

}


