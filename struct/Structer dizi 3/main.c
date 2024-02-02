#include <stdio.h>
#include <stdlib.h>

struct Calisan {
int id;
int maas;
char isim[10];

};

int main()
{
    struct Calisan dizi[3];
    int i,ara;
    for(i=0;i<3;i++){
        scanf("%d", &dizi[i].id);
        scanf("%d", &dizi[i].maas);
        scanf("%s", &dizi[i].isim);
    }
    printf("\n Zam alacak id girin: \n");
    scanf("%d", &ara);
    fonk(dizi,ara);
    for(i=0;i<3;i++){
        printf("\n %d.calisan icin isim= %s, id= %d, maas= %d", i+1, dizi[i].isim, dizi[i].id,dizi[i].maas);
    }
    return 0;
}

void fonk(struct Calisan d[3],int ara){
int i;
for(i=0;i<3;i++){
    if(d[i].id==ara)
        d[i].maas*=2;
}

}
2 1000 baha
3 1500 selman
4 2000 berkay

 Zam alacak id girin:
2

 1.calisan icin isim= baha, id= 2, maas= 2000
 2.calisan icin isim= selman, id= 3, maas= 1500
 3.calisan icin isim= berkay, id= 4, maas= 2000
