#include <stdio.h>
#include <stdlib.h>
// yanlış fonk
int main()
{
    int a[9]= {2,6,4,8,12,89,68,45,37};
    int i;
    sirala(a);
    for(i=0;i<9;i++)
        printf("%d\n", a[i]);
    return 0 ;


}
void sirala(int *aptr){
int i, j,temp=0;
for(i=0;i<9;i++){
    for(j=0;j<8;j++){
        if(aptr[j]>aptr[j+1])// tek eleman adres üzerinde deðiþiklik olmaz yeni fonksiyon yazýp göndermemiz gerekir

        temp=aptr[j];
        aptr[j]=aptr[j+1];
        aptr[j+1]=temp;

    }
}

}
