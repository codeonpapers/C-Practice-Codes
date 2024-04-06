// Array Sorting in Ascending order
//6 Apr 20:19
// Coded by Rakesh Swami
#include<stdio.h>
#include<conio.h>
    int main()
        {
            int aaru[4],i,j,temporary;
            clrscr();
            for(i=0;i<4;i++)
                {
                    printf("Enter %dth Value: ",i);
                    scanf("%d",&aaru[i]);// 4 3 2 1
                }    
                    for(i=0;i<4;i++)
                        {
                            for(j=i+1;j<4;j++)
                                {
                                    if(aaru[i]>aaru[j])
                                        {   temporary=aaru[i];
                                            aaru[i]=aaru[j];
                                            aaru[j]=temporary;
                                        }
                                }
                        }
                    for(i=0;i<4;i++)
                        {
                            printf("%d ",aaru[i]);
                        }    
                
            getch();
        }
    