#include <stdio.h>

int main()
{
   int num1;
   printf("enter number1 : ");
   scanf("%d",&num1);

   if(num1 >= 1 && num1 <= 100)
        if(num1 % 2 == 0)
            printf("%d is even \n",num1);
        else
        printf("%d is odd \n",num1);
    else
    printf("%d is out of range\n",num1);
    return 0;
}

