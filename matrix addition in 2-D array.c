#include<stdio.h>

int main() {
    int i, j, A[10][10], B[10][10], r1, r2, c1, c2, C[10][10];

    // Input size of matrix A
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &r1, &c1);

    // Input size of matrix B
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &r2, &c2);

    // Check if the matrices have the same size
    if (r1 == r2 && c1 == c2) {
        // Input elements of matrix A
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Input elements of matrix B
        printf("Enter elements of matrix B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Calculate the addition of matrices A and B
        printf("\nAddition of A & B:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nArray size mismatched\n");
    }

    return 0;
}
