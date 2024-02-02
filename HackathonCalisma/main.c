#include <stdio.h>
#include <stdlib.h>

void bes_ekle(int *x){
    *x +=5;

}


int main()
{
    int a =12;
    bes_ekle(&a);
    printf("%d",a);
}

