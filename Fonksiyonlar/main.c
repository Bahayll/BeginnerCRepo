#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a ;
    printf("sayi gir = ");
    scanf("%d", &a);
if(a<0)
   printf("0 dan büyük bir sayı giriniz...");
else
     printf("Sonuc= %d ", fakt(a));
return 0;
}
int fakt(int x){

    if(x==0 || x==1)
        return 1;
    else
return x*fakt(x-1);
}
