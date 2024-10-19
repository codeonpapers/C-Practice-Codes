#include<stdio.h>
int max=5;//Global declaration.
int main()
{
    int arr[max]={0,1,2,3,4};
    printf("Before Element: ");
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //Left shifting process block
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]))-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("After Element: ");
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}