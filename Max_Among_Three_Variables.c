#include<stdio.h>
#include<conio.h>
	void main()
{ int a,b,c;
printf("Enter 1st Number: ");
scanf("%d",&a);
printf("Enter 2nd Number: ");
scanf("%d",&b);
printf("Enter 3rd Number: ");
scanf("%d",&c);
if (a>=b && a>=c)
printf("%d is Max\n",a);
else if (b>=a && b>=c)
printf("%d is Max\n",b);
else
printf("%d is Max\n",c);
getch();
}