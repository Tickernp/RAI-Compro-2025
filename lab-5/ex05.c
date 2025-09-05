#include <stdio.h>

int main() 
{
    int num[8];
    int i, small, large;

    for (i = 0; i < 8; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    small = num[0];
    large = num[0];

    for (i = 1; i < 8; i++) 
    {
        if (num[i] < small) 
        {
            small = num[i];
        }
        if (num[i] > large) 
        {
            large = num[i];
        }
    }

    printf("Smallest number: %d\n", small);
    printf("Largest number: %d\n", large);

    return 0;
}
