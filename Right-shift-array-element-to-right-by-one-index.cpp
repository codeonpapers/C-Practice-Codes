#include<stdio.h>
int max=5;//Global declaration.
int main()
{
    int arr[max]={1,2,3,4};
    int sizeOfArray=sizeof(arr)/sizeof(arr[0]);//sizeOfArray=5;
    printf("Before element: ");
    for(int i=0;i<sizeOfArray;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //Right shifting for loop.
    for(int i=sizeOfArray-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("After element: ");
    for(int i=0;i<sizeOfArray;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}