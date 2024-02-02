#include <stdio.h>
#include <stdlib.h>


//                         Sýralama
/*
int main()
{
    int i , d[5]={2,1,3,4,5}; // küçükten büyüðe bu diziyi sýralamak istiyoruz
    d[0]=d[1];
    d[1]=d[0];
     for(i=0;i<5;i++)
        printf("%d, ", d[i]);
}
// 2 yi kaybettik demekki ilk elemanýn deðerini saklayacaðýmýz bir deðiþkene ihtiyacýmýz var

int main (){

int i , d[5]={2,1,3,4,5}, temp ;// temp adlý deðiþkende dizinin ilk elamnýný tutup  dizin 2 . elmaný yapýp iþi çözeceðiz
    temp=d[0];
    d[0]=d[1];
    d[1]=temp;
     for(i=0;i<5;i++)
        printf("%d, ", d[i]);

}
*/
// üsteki örnekte hangi elemanýn sýrayý bozduðunu biliyorduk peki bilmiyorsak napacaðýz
// bir eleman kendinden sonrakinden büyük mü kontrolü yapacaðýz
// n>n+1
// birden fazla sýrayý bozan varsa
// tüm diziyi dolaþ
// döngü n-1
/*
int main(){

int i , a[4]={89,68,45,37}, temp ;

for(i=0;i<3;i++){
   if(a[i]>a[i+1]){
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;

    }

}

 for(i=0;i<4;i++)
        printf("%d, ", a[i]);

}
// çýktý 68-45-37-89 istediðimizi elde edemedik çözüm yolu iç içe döngü kullanarak yukarýda ki iþlemi çoklaþtýrmaktýr
*/

int main(){

int i , a[4]={89,68,45,37}, temp , j;


for(j=0;j<4;j++){
    for(i=0;i<3;i++){
     if(a[i]>a[i+1]){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
}
    }

}

 for(i=0;i<4;i++)
        printf("%d, ", a[i]);

}
// çýktý 37-45-68-89

/*
int main(){

int i , a[6]={150,2520,2,15,20,30}, temp , j;


for(j=0;j<6;j++){
    for(i=0;i<5;i++){
     if(a[i]>a[i+1]){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
}
    }

}

 for(i=0;i<6;i++)
        printf("%d, ", a[i]);

}

              // DÝZÝLERDE ARAMA
/*
int main(){
int a[]={2,3,7,10,15,21,24,70},low, high, mid ;
low=0;
high=7;
int ara = 3 ;


while(low<=high){

    mid = (low+high)/2;

     if (ara == a[mid]){
        return mid;
     }
    else


       if(ara<a[mid]){

         high=mid-1;
       }
else

    low = mid+1;

}printf("%d", a[ara]);
}

