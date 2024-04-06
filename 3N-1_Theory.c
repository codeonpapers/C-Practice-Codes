// Program of 3N+1 theory
// 14 March 2023 19:16
// Programmed by Rakesh Swami
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,p=0;
clrscr();
printf("Enter Any Number: ");
scanf("%d",&num1);
while(num1>1)
{
if(num1%2==0)
    {
        num1=num1/2;
        printf("%d\n",num1);
    }
else
    {
        num1=num1*3+1;
        printf("%d\n",num1);
    }    
}    
getch();
}