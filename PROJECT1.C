#include<stdio.h>
int main()
{
 char operator;
 double num1,num2,result;

 printf("enter your operator(+,-,*,/):");
 scanf("%c",&operator);

 printf("enter the first number:");
 scanf("%lf",&num1);
 printf("enter the second number:");
 scanf("%lf",&num2);

  switch(operator)
  {
  case '+':

     result = num1+num2;
     printf("%.2lf+ %.2lf=%.2lf",num1,num2,result);
     break;


  case '-':

     result = num1-num2;
     printf("%.2if-%.2lf=%.2lf",num1,num2,result);


  case '*':

     result = num1*num2;
     printf("%.2lf*%.2lf=%.2lf",num1,num2,result);


  case '/':
     if (num2!=0)
     {
     result=num1/num2;
     printf("%.2lf/%.2lf=%.2lf\n",num1,num2,result);
     }
     else
     {
     printf("error! division by zero is not allowed.\n");
     }
     break;

     default:
     printf("error! invalid operator.\n");
     break;
     }
     return 0;
     }