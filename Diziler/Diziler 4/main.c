#include <stdio.h>
#include <stdlib.h>


// call by value, call by reference,,,,,
/*
int main()
{
    int d1[5]={1,2,3,4,5};
    fonk (d1[2]);
    printf("%d",d1[2]);
    return 0;

}
void fonk(int a ){

a=a*2;

}
// dizinin bir tek eleman�n� g�nderdik bu y�zden i� diziden ��kar yani i�lemler adres �zerinde olmad���ndan yap�lan de�i�iklikler kal�c� olmaz
// bu y�zden yap�lan de�i�ikliklerin kal�c� olmas�n� istiyorsak tek eleman g�nderdi�imizde bize geri bir de�er d�nd�rmeli yani geri de�er d�nd�ren fonk tipi ve return kullanmal�y�z...
*/

int main()
{
    int d1[5]={1,2,3,4,5};
    d1[2]=fonk (d1[2]);
    printf("%d",d1[2]);
    return 0;

}
int fonk(int a ){

return a*2;
}
