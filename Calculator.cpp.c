#include<stdio.h>
#include<conio.h>
 void main()
 {
 char ch;
 printf("Enter: ");
 scanf("%c",&ch);
 if(ch=='+')
 {
 printf("Addition");
 }
 else if(ch=='-')
 {
 printf("Subtraction");
 }
 else if(ch=='*')
 {
 printf("Multiplication");
 }
 else if(ch=='/')
 {
 printf("Division");
 }
 else if(ch=='%')
 {
 printf("Mudulation");
 }
 
 }