#include <stdio.h>

int main() 
{
    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };

    int tran;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) 
        {
            tran = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = tran;
        }
    }

    printf("Transpose of A =\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
