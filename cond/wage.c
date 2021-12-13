// Wage calculation

#include<stdio.h>

void main()
{
 int hours,rate,wage;

  printf("Enter hours and rate :");
  scanf("%d%d",&hours,&rate);

  wage = hours * rate;

  if (hours > 8)
     wage = wage * 1.10;

  printf("Wage to be paid is : %d",wage);
}
