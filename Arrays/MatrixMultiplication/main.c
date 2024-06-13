#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void matris_fill(int d[2][2]);
void matris_multiply(int d1[2][2], int d2[2][2], int d3[2][2]);

int main()
{
    int i, j, m1[2][2], m2[2][2], m3[2][2];

    // Input elements for the first 2x2 matrix
    printf("Enter elements for the first 2x2 matrix:\n");
    matris_fill(m1);

    // Input elements for the second 2x2 matrix
    printf("\nEnter elements for the second 2x2 matrix:\n");
    matris_fill(m2);

    // Multiply matrices m1 and m2, store result in m3
    matris_multiply(m1, m2, m3);

    // Display the resulting matrix m3 after multiplication
    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to input elements into a 2x2 matrix
void matris_fill(int d[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &d[i][j]);
        }
    }
}

// Function to multiply two 2x2 matrices and store the result in a third matrix
void matris_multiply(int d1[2][2], int d2[2][2], int d3[2][2]) {
    int i, j, k;

    // Initialize elements of matrix d3 to 0
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            d3[i][j] = 0;
        }
    }

    // Perform matrix multiplication: d3 = d1 * d2
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                d3[i][j] += d1[i][k] * d2[k][j];
            }
        }
    }
}
