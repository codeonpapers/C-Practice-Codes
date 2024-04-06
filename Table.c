#include<stdio.h>
#include<conio.h>
	void main()
{ int a=1,b;
  clrscr();
  printf("Enter Table: ");
  scanf("%d",&b);
  do
  {
  printf("%d\n",(b*a));
  a=a+1;
  }
while(a<=10);
getch();

}