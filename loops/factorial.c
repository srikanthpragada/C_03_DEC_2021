// Factorial

#include <stdio.h>

void main()
{
   int num, i, fact = 1;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = 2; i <= num ; i ++)
          fact = fact * i;

     printf("Factorial of %d is %d",num,fact);
}
