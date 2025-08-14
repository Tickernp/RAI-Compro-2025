#include <stdio.h>

int main()
{
   float num1, num2;
   printf("enter number1 : ");
   scanf("%f",&num1);
   printf("enter number2 : ");
   scanf("%f",&num2);

   if(num1 == num2)
        printf("Match\n");
    else
    printf("Try again\n");
    return 0;
}

