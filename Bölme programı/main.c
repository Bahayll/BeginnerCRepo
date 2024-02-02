#include <stdio.h>
int main() {
    int bolunen,bolen,bolum,kalan;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);

    if(bolen==0){
        printf("Tanýmlý degýl");
       return 0;
    }



    if(bolunen==0){

            printf("sonuc= 0");
        return 0;
    }


    bolum= bolunen / bolen;
    kalan= bolunen % bolen;

    printf("Bolum=%d\n",bolum);
    printf("Kalan=%d\n",kalan);

        return 0;
}
