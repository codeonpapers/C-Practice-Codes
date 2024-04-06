#include<stdio.h>
#include<conio.h>
	struct book
	{
	 char name[100];
	 char author[100];
	 float price;

	}A;
	void main()
{
clrscr();
printf("Enter Book Name: ");
scanf("%s",&A.name);
printf("Enter Author's Name: ");
scanf("%s",&A.author);
printf("Enter Price: ");
scanf("%f",&A.price);
printf("\n\n\n");
//Now we have print data from the stored structure
printf("Book Name: %s\n",A.name);
printf("Author Name: %s\n",A.author);
printf("Book Price: %g\n",A.price);
getch();
}