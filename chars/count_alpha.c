// Count No. of alpha entered in 10 chars

#include <stdio.h>

void main()
{
  char ch;
  int i,count = 0;

    printf("Enter 10 chars :");
    for (i = 1; i <= 10; i++)
    {
        ch = getche();
        if (isalpha(ch))
            count ++;
    }
    printf("\nAlpha Count = %d", count);

}
