#include <stdio.h>
#include <stdlib.h>


//                         S�ralama
/*
int main()
{
    int i , d[5]={2,1,3,4,5}; // k���kten b�y��e bu diziyi s�ralamak istiyoruz
    d[0]=d[1];
    d[1]=d[0];
     for(i=0;i<5;i++)
        printf("%d, ", d[i]);
}
// 2 yi kaybettik demekki ilk eleman�n de�erini saklayaca��m�z bir de�i�kene ihtiyac�m�z var

int main (){

int i , d[5]={2,1,3,4,5}, temp ;// temp adl� de�i�kende dizinin ilk elamn�n� tutup  dizin 2 . elman� yap�p i�i ��zece�iz
    temp=d[0];
    d[0]=d[1];
    d[1]=temp;
     for(i=0;i<5;i++)
        printf("%d, ", d[i]);

}
*/
// �steki �rnekte hangi eleman�n s�ray� bozdu�unu biliyorduk peki bilmiyorsak napaca��z
// bir eleman kendinden sonrakinden b�y�k m� kontrol� yapaca��z
// n>n+1
// birden fazla s�ray� bozan varsa
// t�m diziyi dola�
// d�ng� n-1
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
// ��kt� 68-45-37-89 istedi�imizi elde edemedik ��z�m yolu i� i�e d�ng� kullanarak yukar�da ki i�lemi �okla�t�rmakt�r
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
// ��kt� 37-45-68-89

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

              // D�Z�LERDE ARAMA
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

