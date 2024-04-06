#include<stdio.h>
#include<conio.h>
	void main()
{ int Sunday,National_Holiday;
clrscr();
printf("Is Sunday?: ");
scanf("%d",&Sunday);
printf("Is National Holiday?: ");
scanf("%d",&National_Holiday);
if (Sunday || National_Holiday)
printf("Have Party\n");
else
printf("Work\n");
getch();
}