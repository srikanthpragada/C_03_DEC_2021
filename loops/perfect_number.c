// Perfect Number

#include <stdio.h>

void main()
{
   int num, i, sum = 1;

     printf("Enter number :");
     scanf("%d",&num);

     for(i = 2; i <= num/2 ; i ++)
     {
        if (num % i == 0)
              sum += i;
     }

     if(num == sum)
        printf("Perfect Number");
     else
        printf("Not a perfect number");
}
