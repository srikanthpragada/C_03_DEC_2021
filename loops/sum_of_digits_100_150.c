// Print sum of digits for 100 to 150

#include <stdio.h>

void main()
{
   int n,num, total;

     for(n = 100; n <= 150 ; n ++)
     {
          total = 0;
          num = n;
          while(num > 0)
          {
              total += num % 10;
              num /= 10;
          }

          printf("%d - %d\n",n,total);
     }
}
