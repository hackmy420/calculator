#include<stdio.h>
#include<conio.h>
 int main()
{  
     char op;
   printf("enter operator\n");
   scanf("%c",&op);

      float Num1;
    printf("enter NUM1\n");
    scanf("%f",&Num1);
    
    
   
   float Num2;
   printf("enter NUM2\n");
    scanf("%f",&Num2);
   float result;

   switch (op)
   {
   case '+':
    result = Num1+Num2;
    printf("result is : %f",result);
       break;
   
   case '-':
   result = Num1-Num2;
   printf("result is : %f",result);
   break;

   case '*':
   result = Num1*Num2;
   printf("result is : %f",result);
   break;

   case '/':
   result = Num1/Num2;
   printf("result is : %f",result);
   break;

    default:
      printf("Invalid operation");
       break;
   }    
 
 return 0;
}
