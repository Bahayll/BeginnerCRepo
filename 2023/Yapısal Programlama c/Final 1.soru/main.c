#include <stdio.h>
#include <stdlib.h>

struct Calisan{
char isim[10];
int id;
int maas;
};
int main()
{
    struct Calisan dizi[3];
    int i,j,ara,bul;
    for(i=0;i<3;i++){
        scanf("%d", &dizi[i].id);
        scanf("%d", &dizi[i].maas);
        scanf("%s", &dizi[i].isim);
    }
    for(j=0;j<3;j++){
    for(i=0;i<2;i++){
if(dizi[i].maas>dizi[i+1].maas)//unutma bir structera erişirken nokta notasyonu önemlii her struct adı geçtiğinde nokta aklına gelsin
    calisan_sirala(&dizi[i].maas,&dizi[i+1].maas);
}
    }
for(i=0;i<3;i++){
       printf("%d.elaman %d maas alıyor= \n ",i+1,dizi[i].maas);
    }
   printf("Aranacak maas biligisi giriniz= \n ");
   scanf("%d",&ara);
   Calisan_ara(dizi,ara);
   printf("Aranan maastan %d kadar alan vardýr",bul);
   return 0;
}

int Calisan_ara(struct Calisan d1[3],int aranan){
int low,high,i,mid=0,sayac=0;

low=d1[0].maas;
high=d1[3].maas;
while(low!=high){
    mid=(low+high)/2;
    if(aranan== d1[mid].maas){
        return mid;
    }
    else{
        if(aranan < d1[mid].maas){
           high= mid-1;
        }
        else{
            low=high+1;
}
}
}

}
void calisan_sirala(int *el1, int *el2){
int temp= *el1;
*el1=*el2;
*el2=temp;
}
