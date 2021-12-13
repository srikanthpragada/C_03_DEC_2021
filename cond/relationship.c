// Relationship between two numbers

#include <stdio.h>

void main()
{
int a,b;

  printf("Enter two numbers:");
  scanf("%d%d", &a, &b);

  if (a > b)
  {
     printf("first > second");
  }
  else
    if (a < b)
    {
      printf("first < second");
    }
    else
    {
      printf("Equal");
    }

  }
