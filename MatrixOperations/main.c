#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define SIZE1 15

void matrixInput(int a[2][2]);
void matrixSum(int a[2][2], int b[2][2], int c[2][2]);
void matrixPrint(int a[2][2]);
void matrixPrint1(int a[2][3]);
void matrixPrint2(int a[3][2]);
void matrixMultiply(int a[2][2], int b[2][2], int c[2][2]);
void matrixTranspose(int a[3][2], int b[2][3]);

int main()
{
    int d[2][2] = {{1, 2}, {3, 4}};
    int d1[2][2] = {{1, 2}, {3, 4}};
    int sum[2][2];
    int product[2][2];
    int d2[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int transposeMatrix[2][3];

    matrixInput(d);
    matrixSum(d, d1, sum);
    printf("Sum Matrix:\n");
    matrixPrint(sum);
    printf("\n");

    matrixMultiply(d, d1, product);
    printf("Product Matrix:\n");
    matrixPrint(product);
    printf("\n");

    printf("Matrix d2:\n");
    matrixPrint2(d2);
    printf("\n");

    printf("Transpose of Matrix d2:\n");
    matrixTranspose(d2, transposeMatrix);

    return 0;
}

void matrixInput(int a[2][2])
{
    printf("Enter elements for a 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void matrixSum(int a[2][2], int b[2][2], int c[2][2])
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrixPrint(int a[2][2])
{
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void matrixPrint1(int a[2][3])
{
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void matrixPrint2(int a[3][2])
{
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiply(int a[2][2], int b[2][2], int c[2][2])
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void matrixTranspose(int a[3][2], int b[2][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            b[j][i] = a[i][j];
        }
    }

    matrixPrint1(b);
}
