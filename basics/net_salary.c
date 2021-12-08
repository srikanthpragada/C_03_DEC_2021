// Net salary

#include <stdio.h>

void main()
{
   int salary, hra, da, net_salary;

      printf("Enter salary :");
      scanf("%d",&salary);

      hra = salary * 30 / 100;
      da = salary * 20 / 100;
      net_salary = salary + hra + da;

      printf("Net Salary = %d", net_salary);
}
