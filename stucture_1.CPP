#include<stdio.h>
#include<conio.h>
	struct employee
	{
	char name[20], address[20];
	int age, res10, res12,gpa;
	int salary;
	struct skills
		{
			char com[20], leader[20], exp[20];

		}inner;


	}outer;
	void main()

{clrscr();
printf("Enter Employee: ");
gets(outer.name);
printf("Enter Employee Address: ");
gets(outer.address);
printf("Enter Enployee Age: ");
scanf("%f",&outer.age);
printf("Enter 10th Result: ");
scanf("%f",&outer.res10);
printf("Enter 12th Result: ");
scanf("%f",&outer.res12);
printf("Enter Employee GPA: ");
scanf("%f",&outer.gpa);

printf("Enter Employee Salary: ");
scanf("%f",&outer.salary);
printf("\n");
///////////////////////////////////////////////////////////////////////////////////////////////////
printf("Enter skills in 'Yes' OR 'Not'\n\n");
printf("Can Communicate?: ");
scanf("%s",&outer.inner.com);
printf("\n");
printf("Can lead Team?: ");
scanf("%s",&outer.inner.leader);
printf("\n");
printf("Do you Have Experience?: ");
scanf("%s",&outer.inner.exp);
printf("\n");

printf("Name: %s\n",outer.name);
printf("Address: %s\n",outer.address);
printf("Age: %g\n",outer.age);
printf("10th Result: %g\n",outer.res10);
printf("12th Result: %g\n",outer.res12);
printf("GPA: %g\n",outer.gpa);
printf("Communicate?: %s",outer.inner.com);
printf("\n");
printf("Can Team Lead?: %s",(outer.inner.leader));
printf("\n");
printf("Experience?: %s\n",outer.inner.exp);


getch();

}