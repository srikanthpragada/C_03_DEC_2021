// Print prime numbers from 1 to 50

#include <stdio.h>

void main()
{
   int num, prime, i;

      for(num = 1; num <= 100; num += 2)
      {
          prime = 1;
          for(i = 2; i <= num/2; i ++)
          {
              if(num % i == 0) {
                  prime = 0;  // Not a prime number
                  break;
              }
          } // i loop

          if(prime)
            printf("%5d", num);

      } // num loop
}
