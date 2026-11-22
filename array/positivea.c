#include<stdio.h>
int main(){

    int i,n,positive=0,negative=0,zero=0;

    printf("enter number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements");

    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
      {
        positive++;
    }
    else if(arr[i]<0)
    {
        negative++;
    }
    else if(arr[i]==0)
    {
        zero++;
    }}
    printf("number of positive elements = %d",positive);
    printf("number of negative elements = %d",negative);
    printf("number of zero elements=%d",zero);

    return 0;
}