#include <stdio.h>
#include <stdlib.h>

void matris_yap(int d[3][4]);
void matris_transpose(int d1[3][4], int d2[4][3]);

int main()
{
    int m1[3][4], m2[4][3], i, j;

    
    printf("Enter elements for matrix m1 (3x4):\n");
    matris_yap(m1);

   
    matris_transpose(m1, m2);

    printf("\nTranspose of matrix m1 (4x3):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}


void matris_yap(int d[3][4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &d[i][j]);
        }
    }
}


void matris_transpose(int d1[3][4], int d2[4][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            d2[j][i] = d1[i][j]; 
        }
    }
}
