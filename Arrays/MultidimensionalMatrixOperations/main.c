#include <stdio.h>
#include <stdlib.h>


void take_matrix_elements1(int d[3][3]){
    int i, j;
    printf("Enter elements for the first matrix (4 rows, 2 columns): ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &d[i][j]);
        }
    }
}

void take_matrix_elements2(int d[3][3]){
    int i, j;
    printf("Enter elements for the second matrix (2 rows, 4 columns): ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &d[i][j]);
        }
    }
}

void matrix_addition(int matrix1[3][3], int matrix2[3][3], int result[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            result[i][j] = matrix2[i][j] + matrix1[i][j];
        }
    }
}

int main(){
    int i, j, m1[3][3], m2[3][3], m3[3][3];
    take_matrix_elements1(m1);
    take_matrix_elements2(m2);
    matrix_addition(m1, m2, m3);

    printf("Resultant matrix after addition:\n");
  

/*

#include <stdio.h>

int main(){
    int matrixOne[4][2], matrixTwo[2][3], resultMatrix[4][3] = {0};
    int i, j, k;

    printf("Enter elements for the first matrix (4x2):\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%d", &matrixOne[i][j]);
        }
    }

    printf("Enter elements for the second matrix (2x3):\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%d", &matrixTwo[i][j]);
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 2; k++){
                resultMatrix[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main(){
    int rows, cols, i, j;

    printf("Enter number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter number of columns for the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transposedMatrix[cols][rows];

    // Input elements for the matrix
    printf("Enter elements for the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter element a%d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying the original matrix
    printf("\nEntered Matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
            if (j == cols - 1)
                printf("\n");
        }
    }

    // Finding the transpose of matrix
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // Displaying the transposed matrix
    printf("\nTransposed Matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("%d ", transposedMatrix[i][j]);
            if(j == rows - 1)
                printf("\n");
        }
    }

    return 0;
}
*/