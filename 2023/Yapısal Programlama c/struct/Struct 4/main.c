#include <stdio.h>
#include <stdlib.h>
struct student{
char name[10];
int id;
};
struct student getDetail(); // name ve id detaylar� // dizi kulland���m�zda geri d�n��e gerek kalm�yordu adres �zerinde i�lem yapt���m�z i�in burda geri de�er d�nd�rmeye ihtiyac�m�zolursa
// nas�l yapaca��z onun i�in b�yle bir fonksiyon olu�turduk
void displayDetail(struct student std); // std a gibi bir de�i�ken ama t�r� struct student yani hem name  hem de id bilgisi tutuyor...

int main(void)
{
    struct student stdArr[3]; // struct studeten getdetail fonksiyonundan gelecek de�erleri tutmak i�in b�yle bir dizi tan�mlad�k.. 3 ki�ilik olcakm�� s�n�f
    int i ;
    for(i=0;i<3;i++){
        stdArr[i] = getDetail();
    }

     for(i=0;i<3;i++) {
        printf("\n Student #%d Detail: \n", (i+1));
        displayDetail(stdArr[i]);
     }
   return 0;
}
struct student getDetail(){

struct student std;
printf("Name: \n");
scanf("%s", &std.name);
printf("Id: \n");
scanf("%d",&std.id);

return std; // iki de�eride geri d�ndermemiz laz�m bunu i�in ortak bir degi�kende saklad�k o ortak de�i�keni d�nderdik...

};
void displayDetail(struct student std){
printf("name: %s \n", std.name);
printf("Id: %d \n",std.id);
}
