// Array Sorting in Ascending order
//6 Apr 20:19
// Coded by Rakesh Swami
#include<stdio.h>
#define max 4
    int main()
        {
            int arr[max],i,j,temporary;
            for(i=0;i<4;i++)
                {
                    printf("Enter %dth Value: ",i);
                    scanf("%d",&arr[i]);// 4 3 2 1
                }    
                    for(i=0;i<max;i++)
                        {
                            for(j=i+1;j<4;j++)
                                {
                                    if(arr[i]>arr[j])
                                        {   temporary=arr[i];
                                            arr[i]=arr[j];
                                            arr[j]=temporary;
                                        }
                                }
                        }
                    for(i=0;i<max;i++)
                        {
                            printf("%d ",arr[i]);
                        }
            return 0;
        }
    