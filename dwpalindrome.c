#include<stdio.h>
int main(){

    int a,n,rev=0;

    printf("enter n:");
    scanf("%d",&n);

    do
    { 
        a=n%10;
        rev=rev*10+a;
        n=n/10;
 
}
    while (n>0);

       {
        if 
    (n==rev)
    printf("n is palindrome");
    else
    printf("n is not a palindrome");
    } 
    
    return 0;
}