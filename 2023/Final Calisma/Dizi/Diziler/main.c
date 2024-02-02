#include <stdio.h>
#include <stdlib.h>


// ayný türden verileri tutan bir yapýdýr.
// Dizilerde bilmen gereken diðer önemli noktasý ilk eleman ilk adrese yerleþiyor diðerleri
// sýralý adreslere sýralý bir þekilde yerleþiyor burda da adresleri artýrarak diðer elemanlara eriþebiliriz.
// Dizilerde dikkat etmen gereken diðer nokta eleman sayýsý ile index arasýndaki farktýr
//eleman sayýsý 1 den baþlar n e kadar gider indexler 0 dan baþlar n-1 e kadar gider.
// ilk index mutlaka 0 olur

#define SIZE 5
#define SIZE1 10

int main()
{

   int notlar[SIZE]={4,15,2,5,25};
   diziyaz(notlar);
   // 5 elemanlý dizi olsun klavyeden girilsin deðerleri
   int arananifade_indexi;

   Siralama(notlar);

   diziyaz(notlar);

   arananifade_indexi=Binarysearch(notlar,5);
   printf("Aranan ifade= %d\n",arananifade_indexi);

//klavyeden eleman alma
int notlar1[SIZE1];
    printf("Dger diziyi giriniz: ");
   for(int i =0 ; i < SIZE1; i++){
    scanf("%d",&notlar1[i]);  // scanf yazdýysan adres operatörü mutlaka koymalýsýn...
   }

   diziyaz1(notlar1); // 2. dizi yazdýr bu
    return 0;
}


void diziyaz (int A[]){

for(int i =0 ; i < SIZE ; i++){
        printf("index=%d, %d.eleman, %d\n",i,i+1,A[i]);
}
}

void diziyaz1 (int A[]){

for(int i =0 ; i < SIZE1 ; i++){
        printf("index=%d, %d.eleman, %d\n",i,i+1,A[i]);
}
}


//---------------------------------DİZİLERDE SIRALAMA ALGORİTMALARI  METOTLARI-------------------------------------
void Siralama(int a[]){
    int temp, i,j;
    for(i=0; i<5;i++){
        for(j=0; j<4; j++){
            if(a[i]> a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
// Binary search yapılmadan önce dizinin sıralı olması gerekmektedir.
void Binarysearch(int a[],int aranan){
int low =0;
int high = SIZE-1;
int mid;
while(low<=high){
    mid=(low+high)/2;
    if(aranan=a[mid]){
        return mid;
    }
    else{
        if(aranan < a[mid]){
            high = mid-1;
        }
        else
            low=mid+1;
    }
}

}


