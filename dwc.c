#include<stdio.h>
int main(){

    int addition,subtraction,multiplication,division,a,b,operation;

    printf("enter a,b:");
    scanf("%d %d",&a,&b);
printf("enter operation :");
scanf("%d",&operation);

    
        addition=a+b;
        subtraction=a-b;
        multiplication=a*b;
        division=a/b;


    switch(operation)
{
case 1:
printf("addition=%d",addition);
break;
case 2:
printf("subtraction=%d",subtraction);
break;
case 3:
printf("multiplication=%d",multiplication);
break;
case 4:
printf("division=%d",division);
break;
}
    return 0;
}