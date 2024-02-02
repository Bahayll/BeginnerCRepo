#include <stdio.h>
#include <stdlib.h>
// bir nceki programýn çalýþmadýðýný gördük çünki iþlemler adreste yapýladý onu düzeltmek için int yapýp deðer dönüdrmemiz yada adres üzerinde iþlem yapmamýz gereklidir..
int main()
{
    int a[9]= {2,6,4,8,12,89,68,45,37};
    int i;
    sirala(a);
    for(i=0;i<9;i++)
        printf("%d\t", a[i]);
    return 0 ;


}
void sirala(int *aptr){
int i, j,temp;
for(i=0;i<9;i++){
    for(j=0;j<8;j++){
        if(aptr[j]>aptr[j+1])
            degis(&aptr[j],&aptr[j+1]);// artýk iþ dizilerde çýktý tek deðere geçti yani yapýlan iþlemlerin adres üzerinde olmasýný istiyorsan adres oporötörünü koymayý unutma...
}
}
}
void degis(int *el1, int *el2){
int temp=*el1;
*el1=*el2;
*el2=temp;

}

