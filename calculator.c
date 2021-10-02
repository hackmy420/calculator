#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    int opr;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform 1.add\n2.subtract\n3.multiply\n4.division\n5.exit: ");
    scanf(" %d",&opr);
     
    result=0;
 while(opr!=5){
    switch(ch)    
    {
        case '1':
            result=num1+num2;
            break;
             
        case '2':
            result=num1-num2;
            break;
         
        case '3':
            result=num1*num2;
            break;
             
        case '4':
            result=(float)num1/(float)num2;
            break;
        default:
            printf("operation does not exist.\n");
    }
   int p;
   printf("Enter your choice again");
   scanf("%d",&p);
   opr=p;
 }
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}
