// print 1 in diagnal cells and 0 otherwise

#include <stdio.h>

void main()
{
   int i, j;

     for(i = 1; i <= 5 ; i ++)
     {
          for(j = 1; j <= 5; j ++)
          {
              if(i == j || i + j == 6)
                  printf(" 1 ");
              else
                  printf(" 0 ");
          }

          printf("\n");
     }
}
