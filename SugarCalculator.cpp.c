#include<stdio.h>
#include<conio.h>
    void main()
{
  float price, weight, exp, profit, month, revenue;
  clrscr();
  printf("Enter your crop price: ");
  scanf("%f",&price);
  printf("Enter your crop Weight: ");
  scanf("%f",&weight);
  weight=weight-(weight*1/100);
  revenue=weight*price;
  printf("Enter your Expenses: ");
  scanf("%f",&exp);
  profit=revenue-exp;
  month=profit/12;
  
  if(month <=30000)
  {
    printf("You are in LOSS!\n\n");
    printf("Try to make more Money\n\n");
  }
  else
  {
    printf("Start Investing Money\n\n");
  }
  printf("Percent of Expenses: %f\n\n",exp/revenue*100);
  printf("Revenue: %g\n\n",revenue);
  printf("Profit: %g\n\n",profit);
  printf("Monthly Income: %g\n\n",month);
  
  getch();
}    