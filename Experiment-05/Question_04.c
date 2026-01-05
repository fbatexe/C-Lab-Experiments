// 4.WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. 
//   Read matrix A and matrix B in row major order respectively  
//   Report appropriate message in case of incompatibility.
#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of A : ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter elements of A : \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of B : \n");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Cannot multiply columns of A not equal to rows of B");
        return 0;
    }

    int B[p][q], C[m][q];
    printf("Enter elements of B : ");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    printf("Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }

    printf("Matrix C = A x B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
