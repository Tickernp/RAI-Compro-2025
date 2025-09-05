#include <stdio.h>

int main() 
{
    int A[3][3] = 
    {
        { 1, 0, -1},
        {-1, 2,  3},
        { 2, 4,  5}
    };

    int C[3][3] = {0};

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            int sum = 0;
            for (int k = 0; k < 3; k++) 
            {
                sum += A[i][k] * A[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            A[i][j] = C[i][j];

    printf("A x A =\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
