// Calculate area, circum, dia for circle

#include <stdio.h>

void main()
{
   float radius;

      printf("Enter radius :");
      scanf("%f",&radius);

      printf("Area          : %8.2f\n", 3.14 * radius * radius);
      printf("Circumference : %8.2f\n", 2 * 3.14 * radius);
      printf("Diameter      : %8.2f\n", 2 * radius);
}
