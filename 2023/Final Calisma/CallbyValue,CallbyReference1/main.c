#include <stdio.h>
#include <stdlib.h>

//          Call by Value
 // geri döndürerek çözüyorsak iþlemi call by value adý üstünde zaten deðer üstünde iþlemler.


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
