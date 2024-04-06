/*Calculating distance between two cities
and converting into different length units*/
#include<stdio.h>
#include<conio.h>
	void main()
{
	double d,me,fe,in,ce;
    clrscr();
    printf("Enter Distance between two cities: ");
    scanf("%lf", &d);
    /*Formulas of converting length units*/
    me=d*1000;
    fe=d*3280;
    in=d*39370;
    ce=d*100000;
    printf("\nDistance in Meter: %lf",me);
    printf("\nDistance in Feet: %lf", fe);
    printf("\nDistance in Inch: %lf", in);
    printf("\nDistance in Centimeter: %lf", ce);
    getch();












}