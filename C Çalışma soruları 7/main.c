#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int max,min,temp=0,toplam=0,d[SIZE],j,i,ort;
    for(i=0;i<SIZE;i++){
        printf("%d. ogrencinin notunu giriniz= ", i+1);
        scanf("%d", &d[i]);
        toplam+=d[i];
    }
    ort=toplam/10.0;
    printf("Ortalama= %d", ort);

    for(j=0;j<SIZE;j++){
        for(i=0;i<SIZE-1;i++){
                if(d[i]>d[i+1]){
            temp=d[i];
            d[i]=d[i+1];
            d[i+1]=temp;
        }
    }
    }
    max=d[SIZE-1];
    min=d[0];
    printf("Max eleman= %d\n", max);
     printf("Min eleman= %d", min);
    return 0;
}
