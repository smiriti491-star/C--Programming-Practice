#include<stdio.h>
int main(){

    int i=1,odd;

    while(i<=25)
    {
        odd=2*i-1;
        printf("Odd=%d\n",odd);
        i++;
    }

    return 0;
}