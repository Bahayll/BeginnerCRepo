#include <stdio.h>
#include <stdlib.h>

//          Call by Value
 // geri d�nd�rerek ��z�yorsak i�lemi call by value ad� �st�nde zaten de�er �st�nde i�lemler.


int main()
{
   int d1[5]={1,2,3,4,5};
   d1[2]= fonk(d1[2]);
   printf("%d",d1[2]);
    return 0;
}
int fonk(int a ){
return a*2;
}
