#include <stdio.h>
#include <stdlib.h>
struct student{
char name[10];
int id;
};
struct student getDetail(); // name ve id detaylarý // dizi kullandýðýmýzda geri dönüþe gerek kalmýyordu adres üzerinde iþlem yaptýðýmýz için burda geri deðer döndürmeye ihtiyacýmýzolursa
// nasýl yapacaðýz onun için böyle bir fonksiyon oluþturduk
void displayDetail(struct student std); // std a gibi bir deðiþken ama türü struct student yani hem name  hem de id bilgisi tutuyor...

int main(void)
{
    struct student stdArr[3]; // struct studeten getdetail fonksiyonundan gelecek deðerleri tutmak için böyle bir dizi tanýmladýk.. 3 kiþilik olcakmýþ sýnýf
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

return std; // iki deðeride geri döndermemiz lazým bunu için ortak bir degiþkende sakladýk o ortak deðiþkeni dönderdik...

};
void displayDetail(struct student std){
printf("name: %s \n", std.name);
printf("Id: %d \n",std.id);
}
