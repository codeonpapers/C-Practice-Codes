#include<stdio.h>
#include<conio.h>
void main()
{   int charge,TT,empty,quotient,rem;
	clrscr();
    printf("Enter Current Charge: ");
    scanf("%d",&charge);
    empty=95-charge;
    TT =1.5*empty;
    quotient=TT/60;
    rem=TT%60;
    if(quotient==0)
    printf("Not available in Hours\n");
    else
    printf("In Hours: %d\n",quotient);
    if(rem==0)
    printf("Not available in Minutes\n");
    else 
    printf("In minutes: %d\n",rem);
    getch();
}