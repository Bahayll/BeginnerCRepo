#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][4],m2[4][3],i,j;
    matris_yap(m1);
    matris_transpoz(m1,m2);
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("\n%d.satýr %d sütün  %d dir",i+1,j+1,m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matris_yap(int d[3][4]){
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d satýr %d sütün= ",i+1,j+1);
        scanf("%d",&d[i][j]);
    }
}

}
void matris_transpoz(int d1[3][4],int d2[4][3])// dizileri tanýmlarken ikisininde baþýna türünü(int) yazmayý unutma...
{
    int i,j ;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            d2[j][i]= d1[i][j];
        }
    }
}
