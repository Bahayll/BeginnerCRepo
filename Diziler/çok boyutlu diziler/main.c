#include <stdio.h>
#include <stdlib.h>


void matris_eleman_al1(int d[3][3]){

   int i,j;
   printf("4 satýr 2 sütundan oluþan ilk matrisin elemanlarýný girin: ");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        scanf("%d",&d[i][j]);
      }
   }

}
void matris_eleman_al2(int d[3][3]){

   int i,j;
   printf("2 satýr 4 sütundan oluþan ikinci matrisin elemanlarýný girin: ");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        scanf("%d",&d[i][j]);
      }
   }

}

void matris_topla(int d1[3][3],int d2[3][3],int d3[3][3]){
int i,j;
for(i=0;i<3;i++){
      for(j=0;j<3;j++){
       d3[i][j]=d2[i][j]+d1[i][j];
      }
}
}

int main()
{
 int i,j, m1[3][3],m2[3][3],m3[3][3];
 matris_eleman_al(m1);
 matris_eleman_al(m2);
 matris_topla(m1,m2,m3);

  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         printf("%d, ",m3[i][j]);

}
 printf("\n");
  }
  return 0;
}
/*

int main(){

        int mDiziBir[4][2], mDiziIki[2][3], mDiziSonuc[4][3]={0};
        int i, j, k;

        printf("Birinci Matrisi Giriniz\n");
        for(i=0; i<4; i++)
                for(j=0; j<2; j++){
                        printf("[%d][%d]= ", i, j);
                        scanf("%d", &mDiziBir[i][j]);
                }

        printf("ikinci Matrisi Giriniz\n");
        for(i=0; i<2; i++)
                for(j=0; j<3; j++){
                        printf("[%d][%d]= ", i, j);
                        scanf("%d", &mDiziIki[i][j]);
                }

        printf("Sonuc\n");
        for(i=0; i<4; i++){
                for(j=0; j<3; j++){
                        for(k=0; k<2; k++){
                                mDiziSonuc[i][j] += mDiziBir[i][k] * mDiziIki[k][j];
                        }
                        printf("%d ", mDiziSonuc[i][j]);
                }

                        printf("\n");
        }

        getch();
        return 0;
}

#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Matris satýr ve sütunlarýný girin: ");
    scanf("%d %d", &r, &c);

    // Matrisin elemanlarýný saklýyoruz
    printf("\nMatris elemanlarýný girin:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Eleman girin a%d%d: ",i, j);
            scanf("%d", &a[i][j]);
        }

    // Matris gösteriliyor a[][]
    printf("\nGirilen Matris: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    // A matrisinin transpozisyonunu bulma
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    // A matrisinin transpozisyonunu görüntüleme
    printf("\nMatrisin transpozu:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}

int main(){
    int a, b, i, j;

    printf("Matris Satir Sayisi Giriniz: ");
    scanf("%d", &a);
    printf("Matris Sutun Sayisi Giriniz: ");
    scanf("%d", &b);

    int matris[a][b], matrisT[b][a];

    // Matris'e elemanlarý kullanýcýdan alma
    for(i=0; i<a; i++)
        for(j=0; j<b; j++){
            printf("%dx%d elemanini giriniz: ", i+1, j+1);
            scanf("%d", &matris[i][j]);
        }

    //Matrisin Transpozunu alma
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            matrisT[j][i] = matris[i][j];
        }
    }

    // Matris elemanlarýný ekrana yazdýrma
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    // Matrisin Transpozunun Ekrana Yazdýrma
    printf("Transpozu\n");
    for(i=0; i<b; i++){
        for(j=0; j<a; j++){
            printf("%d ", matrisT[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
*/
