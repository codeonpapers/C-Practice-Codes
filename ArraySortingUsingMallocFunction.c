// Array Sorting using malloc() function
// 6 Apr 2024 10:39 PM
// Coded by Rakesh Swami
#include<stdio.h>
#include<conio.h>
    int main()
        {
            int a,*pointer,i,in,out,temp;
            clrscr();
            printf("Enter Size Of Array: ");
            scanf("%d",&a);
            printf("\n");
            pointer=(int*)malloc(a*sizeof(int));
            for(i=0;i<a;i++)
                {
                    printf("Enter %dth Values: ",i+1);
                    scanf("%d",&pointer[i]);//5 4 3 2 1
                }
            for(out=0;out<a;out++)    
                {
                    for(in=out+1;in<a;in++)
                        {
                            if(pointer[out]>pointer[in])
                                {
                                    temp=pointer[out];
                                    pointer[out]=pointer[in];
                                    pointer[in]=temp;
                                }
                        }
                }
                
                
            for(i=0;i<a;i++)
                {
                    printf("%d ",pointer[i]);
                }    
            free(pointer);
           // return 0;
            getch();    
            return 0;
        }
