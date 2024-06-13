#include <stdio.h>
#include <stdlib.h>  // Don't forget to include necessary libraries

// Function prototypes
void matris_yap(int d[3][4]);
void matris_yap2(int d[4][3]);
void matris_carp(int d1[3][4], int d2[4][3], int d3[3][3]);

int main()
{
    int i, j, m1[3][4], m2[4][3], m3[3][3];

    // Input elements for the first matrix (3x4)
    printf("Enter elements for the first matrix (3x4):\n");
    matris_yap(m1);

    // Input elements for the second matrix (4x3)
    printf("\nEnter elements for the second matrix (4x3):\n");
    matris_yap2(m2);

    // Multiply matrices m1 (3x4) and m2 (4x3), store result in m3 (3x3)
    matris_carp(m1, m2, m3);

    // Display the resulting matrix m3 (3x3) after multiplication
    printf("\nResultant matrix after multiplication (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to input elements into a 3x4 matrix
void matris_yap(int d[3][4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &d[i][j]);
        }
    }
}

// Function to input elements into a 4x3 matrix
void matris_yap2(int d[4][3]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &d[i][j]);
        }
    }
}

// Function to multiply a 3x4 matrix (d1) by a 4x3 matrix (d2) and store the result in a 3x3 matrix (d3)
void matris_carp(int d1[3][4], int d2[4][3], int d3[3][3]) {
    int i, j, k, temp = 0;

    // Initialize elements of matrix d3 to 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            d3[i][j] = 0;
        }
    }

    // Perform matrix multiplication: d3 = d1 * d2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                temp += d1[i][k] * d2[k][j];
            }
            d3[i][j] = temp;
            temp = 0;  // Reset temp for the next iteration
        }
    }
}
