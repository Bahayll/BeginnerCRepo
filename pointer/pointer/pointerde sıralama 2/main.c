#include <stdio.h>
#include <stdlib.h>
// bir nceki program�n �al��mad���n� g�rd�k ��nki i�lemler adreste yap�lad� onu d�zeltmek i�in int yap�p de�er d�n�drmemiz yada adres �zerinde i�lem yapmam�z gereklidir..
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
            degis(&aptr[j],&aptr[j+1]);// art�k i� dizilerde ��kt� tek de�ere ge�ti yani yap�lan i�lemlerin adres �zerinde olmas�n� istiyorsan adres opor�t�r�n� koymay� unutma...
}
}
}
void degis(int *el1, int *el2){
int temp=*el1;
*el1=*el2;
*el2=temp;

}

