#include <stdio.h>

void mult_2d_array(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2);

int main() {
    int i, j, A[10][10], B[10][10], r1, r2, c1, c2, C[10][10];

    printf("\nEnter size of array A (rows and columns): ");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter size of array B (rows and columns): ");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2) {
        // Input elements of matrix A
        printf("\nEnter elements of matrix A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Input elements of matrix B
        printf("\nEnter elements of matrix B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Function call to multiply the matrices
        mult_2d_array(A, B, C, r1, c1, c2);

        // Print the result matrix C
        printf("\nResultant matrix C (after multiplication):\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nArray size mismatched. The number of columns in A must equal the number of rows in B.\n");
    }

    return 0;
}

void mult_2d_array(int A[][10], int B[][10], int C[][10], int r1, int c1, int c2) {
    int i, j, k, sum;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}
