#include <stdio.h>
#include <stdlib.h>
struct link_list{
int data;
struct link_list *next;

};

struct Calisan{
char isim[10];
int id;
int maas;
struct link_list *next;
};
int Calisan_ara(struct Calisan a[3],int b);

int main()
{
   struct Calisan head[3];
   int i,ara,bul,sayac=0;
   for(i=0;i<3;i++){
    scanf("%s",&head[i].isim);
    scanf("%d", &head[i].id);
    scanf("%ds", &head[i].maas);
   }
   for(i=0;i<3;i++){
   printf("%s %d %d\n",head[i].isim,head[i].id, head[i].maas);
}

   calisan_sirala(head);
for(i=0;i<3;i++){
   printf(" %d\n", head[i].maas);
}
printf("Aranacak maas biligisi giriniz= \n ");
   scanf("%d",&ara);

bul=Calisan_ara(head,ara);
    printf("%d",bul);
    return 0;
}



void calisan_sirala(struct Calisan a[3]){
    int i,j ,temp=0;
    for(j=0;j<3;j++){
    for(i=0;i<2;i++){
    if( a[i].maas > a[i+1].maas){
       temp= a[i].maas;
     a[i].maas=a[i+1].maas;
     a[i+1].maas=temp;
    }
}
}
}
int Calisan_ara(struct Calisan a[3],int b){
int low,high,mid;
low= a[0].maas;
high=a [2].maas;
while(low<=high){
    mid=(low+high)/2;
    if(b==a[mid].maas)
        return a[mid].maas;
    else
        if(b < a[mid].maas)

             high=mid-1;
    else
        low=mid+1;

}

}
