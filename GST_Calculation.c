/*Value of 3 items+GST(18%)*/
#include<stdio.h>
#include<conio.h>
    void main()
{ float a[3],b,c,d,e,f,g,h,i;
clrscr();
printf("Enter 1st item's price: ");
scanf("%f",&a[0]);
printf("Enter 2st item's price: ");
scanf("%f",&a[1]);
printf("Enter 3st item's price: ");
scanf("%f",&a[2]);
//Process Section
b=a[0]*18/100;
c=b+a[0];//1st output
d=a[1]*18/100;
e=d+a[1];//2nd output
f=a[2]*18/100;
g=f+a[2];// 3rd output
//Print section
printf("GST+Amount: ₹%g\n",c);
printf("GST+Amount: ₹%g\n",e);
printf("GST+Amount: ₹%g\n",g);
getch();
}    