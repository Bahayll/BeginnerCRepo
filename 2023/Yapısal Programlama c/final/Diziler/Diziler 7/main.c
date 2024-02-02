#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j, m1[2][2], m2[2][2],m3[2][2];
    matris_yap(m1);
    matris_yap(m2);
    matris_carp(m1,m2,m3);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t", m3[i][j]);

        }
        printf("\n");

    }
    return 0;
}

void matris_yap(int d[2][2]){
    int i,j;
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d.satýr %d.sütün elemanýný giriniz",i+1,j+1);
        scanf("%d",&d[i][j]);
        }

        }
}

void matris_carp(int d1[2][2],int d2[2][2],int d3[2][2]){
int i,j,k,tut=0;
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++)
            {
        tut +=  d1[i][k] * d2[k][j];
        }
        tut=d3[i][j];
        tut=0;
        }
}
}
