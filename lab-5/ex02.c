#include<stdio.h>
int main()
{
    int ori[] ={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int re[9];
    int i;

    for ( i = 0; i < 9; i++)
    {
        re[i] = ori[9 - 1 - i];

    }
    printf("Reversed Array: ");
    for (i = 0; i < 9; i++) 
    {
        printf("%d ", re[i]);
    }
    printf("\n");
   
    return 0;
}