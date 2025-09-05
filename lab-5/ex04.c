#include<stdio.h>
int main()
{
    int value[10];
    int i, even = 0, odd = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Enter Value %d:", i + 1);
        scanf("%d", &value[i]);
    }
    
    for (i = 0; i < 10; i++) 
    {
        if (value[i] % 2 == 0) 
        {
            even++;
        } else 
        {
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    
    return 0;
}