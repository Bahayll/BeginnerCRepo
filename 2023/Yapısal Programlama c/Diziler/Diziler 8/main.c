#include <stdio.h>
#include <stdlib.h>   //klasik sorularda kütüphaneleri dahil etmeyi asla unutmaaaa

int main()
{
    int i , j, m1[3][4], m2[4][3],m3[3][3];
    matris_yap(m1);
    matris_yap2(m2);
    matris_carp(m1,m2,m3);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", m3[i][j]);

        }
        printf("\n");

    }
    return 0;
}

void matris_yap(int d[3][4]){
    int i,j;
for(i=0;i<3;i++){
        for(j=0;j<4;j++){
        scanf("%d", &d[i][j]);
        }

        }
}

void matris_yap2(int d[4][3]){
    int i,j;
for(i=0;i<4;i++){
        for(j=0;j<3;j++){
        scanf("%d", &d[i][j]);
        }

        }
}

void matris_carp(int d1[3][4],int d2[4][3],int d3[3][3]){
int i,j,k,temp=0;// tempi sýfýrlaman önemli yoksa ilk eleman farklý olur...
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++)
            {
        temp = temp + d1[i][k] * d2[k][j];
        }
        d3[i][j]=temp;
        temp=0;
        }
}
}
