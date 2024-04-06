#include<stdio.h>
#include<conio.h>
	void main()
{ int Sunday,Friends_Agree;
printf("Is Sunday?: ");
scanf("%d",&Sunday);
printf("Is Friends Agree?: ");
scanf("%d",&Friends_Agree);
if (Sunday && Friends_Agree)
printf("Go to Picnic\n");
else
printf("Stay Alone\n");
getch();
}