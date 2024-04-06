#include<stdio.h>
#include<conio.h>
    void main()
{
  int age,*ptr;
  clrscr();
  printf("Enter Age: ");
  scanf("%d",&age);
  ptr=&age;
  *ptr=*ptr+10;
  printf("Age After 10 years later: %d",*ptr);
  getch();
}    