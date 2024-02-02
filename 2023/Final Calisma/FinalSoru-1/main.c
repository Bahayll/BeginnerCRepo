#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Calisan yapisi (structure)
struct Calisan {
    char isim[50];
    int id;
    float maas;
    struct Calisan* next;
};

// Bagli liste uzerinde ekleme yapma fonksiyonu
void ekle(struct Calisan** head, char isim[], int id, float maas) {
    struct Calisan* yeni_calisan = (struct Calisan*)malloc(sizeof(struct Calisan));
    strcpy(yeni_calisan->isim, isim);
    yeni_calisan->id = id;
    yeni_calisan->maas = maas;
    yeni_calisan->next = NULL;

    if (*head == NULL) {
        *head = yeni_calisan;
    } else {
        struct Calisan* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = yeni_calisan;
    }
}

// Bagli listeyi yazdýrma fonksiyonu (test amacýyla kullanýlabilir)
void yazdir(struct Calisan* head) {
    struct Calisan* temp = head;
    while (temp != NULL) {
        printf("Isim: %s, ID: %d, Maas: %.2f\n", temp->isim, temp->id, temp->maas);
        temp = temp->next;
    }
}

// Bagli liste uzerinde Bubble Sort algoritmasi ile siralama
void bubbleSort(struct Calisan* head) {
    int kontrol;
 struct Calisan* ptr1;
   struct Calisan* lptr = NULL;

    // Eðer liste boþ ise veya sadece bir eleman varsa iþlem yapmaya gerek yok
    if (head == NULL || head->next == NULL) {
        return;
    }

    do {
        kontrol = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->maas > ptr1->next->maas) {
                // Calisanlarin maas degerlerini takas et
                float temp = ptr1->maas;
                ptr1->maas = ptr1->next->maas;
                ptr1->next->maas = temp;
                kontrol = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (kontrol);
}

// Baðlý listeyi arama islemi için Binary Search fonksiyonu

struct Calisan Binarysearch(struct Calisan* head, float aranan_maas){
    int sayac=0
    struct Calisan* low; // dikkat veri tipine dikkat etttttt
    low=head;
    high=head[99];
    while(low.maas<=high.maas){
        mid=(low+high)/2;
        if(mid.maas==aranan_maas){
          return mid;

        }
        else{
            if(aranan_maas < mid.maas)
                high=mid-1;
            else
                low=mid+1;
        }

    }

printf("\nAranan maas degerini girin: ");
    scanf("%f", &aranan_maas);



}

int Silme(struct Calisan* head, struct Calisan* Silinecek) {
    int kontrol=0;
    struct Calisan temp=head;
    if(head==Silinecek){ //ilk eleman ise
        head=head->next;
        free(Silinecek);
        kontrol=1;
    }
    else{
         while(temp->next!=Silinecek){
        temp=temp->next;
    }
        temp->next=Silinecek->next;
        free(Silinecek);
        kontrol=1;

    }

 return kontrol;
}
int LinearSearch(struct Calisan* head, float maas) {
    int count = 0;

   struct Calisan* current = head;
    while (current != NULL) {
        if (current->maas == maas) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    struct Calisan* liste = NULL;

    // Örnek çalýþanlar ekleyelim
    ekle(&liste, "Ahmet", 1, 2500.0);
    ekle(&liste, "Mehmet", 2, 3000.0);
    ekle(&liste, "Ayse", 3, 2500.0);
    ekle(&liste, "Fatma", 4, 3500.0);
    ekle(&liste, "Ali", 5, 2500.0);


    // Baðlý listeyi yazdýrma (test amacýyla)
    printf("Baðlý Liste:\n");
    yazdir(liste);

    // Baðlý listeyi maaþ deðerine göre sýralama
    bubbleSort(liste);

    printf("\nMaaþ deðerine göre sýralanmýþ Baðlý Liste:\n");
    yazdir(liste);

    // Maaþ arama iþlemi
    float aranan_maas;
    printf("\nAranan maaþ deðerini girin: ");
    scanf("%f", &aranan_maas);

    int sonuc = LinearSearch(liste, aranan_maas);

    printf("\n%d kiþi %.2f maaþýný alýyor.\n", sonuc, aranan_maas);

    return 0;
}
