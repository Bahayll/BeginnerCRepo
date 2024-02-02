#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SIZE1 15

int main()
{
    int d[2][2]={{1,2},{3,4}};
    int d1[2][2]={{1,2},{3,4}};
    int toplam[2][2];
    int carp[2][2];
    int d2[3][2]={{1,2},{3,4},{5,6}};
    int transpozmatrsi[2][3];


    matrisyaz(d);
    matristopla(d,d1,toplam);
    matrisyaz(toplam);
    matrsicarp(d,d1,carp);
    matrisyaz2(d2);
    MatrisTranspoze(d2,transpozmatrsi);
    return 0;
}
void matrisal(int a[2][2]){

int i,j;
for(i=0; i<2 ; i++){
    for(j=0; j<2 ; j++){
        scanf("%d",&a[i][j]);
    }
}
}
void matristopla(int a[2][2],int b[2][2],int c[2][2]){
    int i,j;
for(i=0; i<2 ; i++){
    for(j=0; j<2 ; j++){
        c[i][j]=a[i][j] + b[i][j];
    }
}

}
void matrisyaz(int a[2][2]){

int i,j;
printf("---Matris----\n");
for(i=0; i<2 ; i++){
    for(j=0; j<2 ; j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}
}
void matrisyaz1(int a[2][3]){

int i,j;
printf("---Matris----\n");
for(i=0; i<2 ; i++){
    for(j=0; j<3 ; j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}

}

void matrisyaz2(int a[3][2]){

int i,j;
printf("---Matris----\n");
for(i=0; i<3 ; i++){
    for(j=0; j<2 ; j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}

}
void matrsicarp(int a[2][2],int b[2][2],int c[2][2]){
      int i,j,k;
      for(i=0; i<2 ; i++){
    for(j=0; j<2 ; j++){
            for(k=0; k<2 ;k++){

                c[i][j] += a[i][k] * b[k][j];

            }

    }

}

  matrisyaz(c);
}
void MatrisTranspoze(int a[3][2],int b[2][3]){
    int i,j;

for(i=0; i<3 ; i++){
    for(j=0; j<2 ; j++){

       b[j][i]=a[i][j];


    }

}
matrisyaz1(b);
}




