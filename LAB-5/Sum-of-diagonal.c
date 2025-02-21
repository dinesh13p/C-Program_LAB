// Write a program to compute the sum of diagonal elements of a square matrix.

#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the square matrix (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &N);

    int matrix[N][N];
    int sum = 0;

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements
    for (int i = 0; i < N; i++) {
        sum += matrix[i][i];
    }

    // Display the sum
    printf("\nSum of diagonal elements: %d\n", sum);

    return 0;
}