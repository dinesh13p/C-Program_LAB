//Write a program to multiply two 3*3 matrix.


#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Result[3][3] = {0};

    // Read elements of the first matrix A
    printf("Enter elements of the first matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of the second matrix B
    printf("Enter elements of the second matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices A and B and store in Result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resultant matrix
    printf("\nResultant Matrix (A * B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n"); // Newline for next row
    }

    return 0;
}