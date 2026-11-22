#include<stdio.h>
int main(){

    int sum,subtraction,multiply,a,b,calculator;
    double divide;

    printf("enter a,b :");
    scanf("%d %d",&a,&b);

switch(calculator)
{
case 1:
sum = a+b;
printf("addition = %d",sum);
break;

case 2:
subtraction = a-b;
printf("subtraction = %d",subtraction);
break;

case 3:
divide = a/b;
printf("division = %lf",divide);
break;

case 4:
multiply = a*b;
printf("multiplication = %d",multiply);
break;
}


return 0;
}