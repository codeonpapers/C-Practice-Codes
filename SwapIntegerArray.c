// Integer Array Swapping
// 17 March 2024 18:39
// Code by Rakesh Swami
#include<stdio.h>
#include<conio.h>
int main()
{
int array1[]={1,2,3,4,5};
int array2[]={6,7,8,9,10};
int temp,i;
clrscr();
for(i;i<5;i++)
  {
      temp=array2[i];
      array2[i]=array1[i];
      array1[i]=temp;
  }
printf("Swaped\n\n");  
printf("Array1[]\n\n");

for(i=0;i<5;i++)
  {
      printf("%d",array1[i]);
  }
printf("\n\n");  
printf("Array2[]\n\n");  
for(i=0;i<5;i++)
  {
      printf("%d",array2[i]);
  }
return 0;  
}