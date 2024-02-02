#include <stdio.h>
#include <stdlib.h>
struct KART{
char *cins;
char *no; // niye pointer �eklinde tan�mlad�k dizi olarak tan�mlasak no[5] yapmam�z gereke�ekti as 2 karakterl oldu�u i�in haf�zada bo� 3 yer kalacakt� haf�zay� dolduracakt�k bunu �nlemek i�in yapt�k..
};
int main()
{
int i;
struct KART Deste[52];
char *no[]={"As","Papaz","Kiz","Vale","On","iki","Uc","Dort","Bes","Alti","Yedi","Sekiz","Dokuz",};
char *cins[]={"Kupa","Karo","Maca","Sinek"};
desteYap(Deste,cins,no);
dagit(Deste);
karistir(Deste);
dagit(Deste);
return 0;
}
void desteYap(struct KART *Deste, char *cins[], char *no[]){
int i ;
for(i=0;i<52;i++){
    Deste[i].no = no[i%13];
    Deste[i].cins = no[i/13];
   }
}
void karistir(struct KART *Deste){
int i,j;
struct KART temp;
    for(i=0;i<52;i++){
        j= rand()%52;
        temp=Deste[i];
        Deste[i]=Deste[j];
        Deste[j]=temp;
    }
}
void dagit(struct KART *Deste){
int i;
for(i=0;i<52;i++){
    printf("%s  %s \n",Deste[i].cins, Deste[i].no);
    if(i%4==0)
        printf("\n");
}


}
