#include <stdio.h>

int main() {
   int choice;
   int num1, num2, result;

   while(1==1)
  {
    printf("Choose the following operation to perform\n");
    printf("1. Addition of numbers\n");
    printf("2. subtraction of numbers\n");
    printf("3. Multiplication of numbers\n");
    printf("4. Division of numbers\n");
    printf("5. to exit\n");
   
   scanf("%d",&choice);
   if(choice==5)
   {
    printf("Exit calculator\n");
    break;
   }
      
   printf("Enter the numbers\n");
   scanf("%d%d",&num1, &num2);
switch(choice)
{
    case 1 : printf("%d + %d = %d\n",num1, num2, (num1+num2));
             break;
    case 2 : printf("%d - %d = %d\n",num1, num2, (num1-num2));
             break;         
    case 3 : printf("%d * %d = %d\n",num1, num2, (num1*num2));
             break;
    case 4 : if(num2==0)
              printf("Invalid operation\n");
             else
              printf("%d / %d = %d\n",num1, num2, (num1/num2));
             break;
    case 5 : printf("Exit\n");
             break;
             
}
  }
    return 0;
}
