#include <stdio.h>

int main()
{
   int num1;
   printf("enter number1 : ");
   scanf("%d",&num1);

   switch((num1 >= 1 && num1 <= 100)){
    case 1:
        switch (num1 % 2){
            case 0:
               printf("%d is even \n",num);
               break;
            case 1:
               printf("%d is odd \n",num1);
               break;
        }
        break;
       default:
           printf("%d is out of range\n",num1); 
    }
    
    return 0;
}
