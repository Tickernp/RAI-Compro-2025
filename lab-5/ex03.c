#include<stdio.h>
int main()
{
    int M[5];
    int i, sum = 0;
    int HM;

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d:", i + 1);
        scanf("%d", &M[i]);
        sum += M[i];
    }
    for ( i = 0; i < 5; i++)
    {
        if (M[i] > HM)
        {
            HM = M[i];
        }
        
    }
    
    printf("Total Marks :%d\n", sum);
    printf("Highest Marks:%d\n", HM);

    return 0;
}