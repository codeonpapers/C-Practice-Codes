//Title: Array element swapping.
//Date: 19 Oct 2024
#include<stdio.h>
int size=5;
int main()
{
    int arr1[size]={1,2,3,4,5};
    int arr2[size]={6,7,8,9,10};
    int temp1;
    int temp2;
    for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
    {
        temp1=arr1[i];
        temp2=arr2[i];
        arr2[i]=temp1;
        arr1[i]=temp2;
    }
    //Print swapped elements.
    printf("First Array: ");
    for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}