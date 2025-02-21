//Write a program to add 3*2 matrix

#include <stdio.h>

int main() {
    int A[3][2], B[3][2], Result[3][2];

    // Read elements of the first matrix A
    printf("Enter elements of the first matrix (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of the second matrix B
    printf("Enter elements of the second matrix (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices A and B and store in Result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            Result[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the resultant matrix
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n"); // Newline for next row
    }

    return 0;
}