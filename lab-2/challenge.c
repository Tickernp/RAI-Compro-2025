#include<stdio.h>
int main() 
{  
    int A ,B ,C;
    int max ,min ,sum;
    float average;

    printf("Enter Integer #1: ");
    scanf("%d",&A);
    printf("Enter Integer #2: ");
    scanf("%d",&B);
    printf("Enter Integer #3: ");
    scanf("%d",&C);

    max = A;
    if (B > max) max = B;
    if (C > max) max = C;

    min = A;
    if (B < min) min = B;
    if (C < min) min = C;

    sum = A+B+C;

    average = (A+B+C/3);

    printf("\nResults :\n");
    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);
    printf("Sum : %d\n", sum);
    printf("Average : %.2f\n", average);
    return 0;
}
