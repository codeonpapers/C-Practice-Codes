// Array Sorting in Ascending order
//6 Apr 20:19
// Coded by Rakesh Swami
#include<stdio.h>
#define max 4
    int main()
        {
            int arr[max],i,j,temp;
            int arraySize=sizeof(arr)/sizeof(arr[0]);
            for(i=0;i<4;i++)
                {
                    printf("Enter %dth Value: ",i);
                    scanf("%d",&arr[i]);// 4 3 2 1
                }    
                    for(i=0;i<arraySize;i++)
                        {
                            for(j=i+1;j<arraySize;j++)
                                {
                                    if(arr[i]>arr[j])
                                        {   temp=arr[i];
                                            arr[i]=arr[j];
                                            arr[j]=temp;
                                        }
                                }
                        }
                    for(i=0;i<arraySize;i++)
                        {
                            printf("%d ",arr[i]);
                        }
            return 0;
        }
    