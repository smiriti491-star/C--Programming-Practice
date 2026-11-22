#include<stdio.h>
int main(){

    int n,i,sum=0;
double avg;

    printf("enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:");
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
 for(i=0;i<n;i++)
 {
    sum = sum+arr[i];
}
avg= (double)sum/n;

printf("Average = %lf",avg);


    return 0;
}