#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;

    printf("Please enter an integer value: ");
    scanf("%d" ,&i);
    printf("You entered %d\n",i);

    printf("Please enter a float value: ");
    scanf("%f" ,&f);
    printf("You entered %.1f\n",f);

    printf("Please enter a character: ");
    scanf(" %c" ,&c);
    printf("You entered %c\n",c);
    return 0;
}
