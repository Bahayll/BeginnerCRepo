#include <stdio.h>
#include <stdlib.h>
struct Employee{
int id;
char isim[10];
};
int main()
{
    struct Employee dizi[3];
    int i ;
    for(i=0;i<3;i++){
        scanf("%d", &dizi[i].id);
        scanf("%s", &dizi[i].isim);
    }
     for(i=0;i<3;i++){
        printf("\n %d. calisan icin isim= %s, \t id= %d",i+1,dizi[i].isim, dizi[i].id);
    }


    return 0;
}
