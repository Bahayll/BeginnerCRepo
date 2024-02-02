#include <stdio.h>
#include <stdlib.h>

//0 1 1 2 3 5 8 13 21

int main()
{
    int x;
    printf("Sayý gir= ");
    scanf("%d", &x);
    if(x<0)
        printf("0 dan büyük bir sayý giriniz...");
    else
        printf("Sonuc = %d.eleman %d", x, fibon(x));
    return 0;
}
int fibon(int a){
if(a==0 || a==1 )
    return a;
else
    return fibon(a-1) + fibon(a-2);

}
