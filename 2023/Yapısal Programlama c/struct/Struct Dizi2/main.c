#include <stdio.h>
#include <stdlib.h>
struct Calisan{
int id;
char isim[10];
};
// 3 tane çalışan tutalım
int main()
{
    struct Calisan dizi[3];
    int i ;
    for(i=0;i<3;i++){
        scanf("%d", &dizi[i].id);// böyle yazmassan olmazz dizi[i].id unutma !!
        scanf("%s", &dizi[i].isim);
    }
     for(i=0;i<3;i++){
        printf("\n %d. calisan icin isim= %s, \t id= %d",i+1,dizi[i].isim, dizi[i].id);
    }


    return 0;
}
