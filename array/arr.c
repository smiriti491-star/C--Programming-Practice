#include<stdio.h>
int main(){

    int n,i;    

    int largest ,second;

    printf("enter the size:");
    scanf("%d",&n);

    int arr[n];

    printf("enter array elements");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    largest = arr[0];
    second = arr[0];

    for(i =1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second = largest;
            largest = arr[i];

        }
        else if (arr[i]>second && arr[i]<largest)
        {
            second = arr[i];
        }
    }
    if(second==largest)
    printf("no second largest element");
    else
    printf("second largest = %d",second);

    return 0;
}
