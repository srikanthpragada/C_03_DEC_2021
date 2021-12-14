// Take type of object and details to calculate area

#include <stdio.h>

void main()
{
   int type, radius, side, length, width, area;

    printf("Enter type of object [1-Circle, 2-Square, 3-Rect] : ");
    scanf("%d",&type);

    if(type == 1)
    {
      printf("Enter radius :");
      scanf("%d",&radius);
      area = 3.14 * radius * radius;
    }
    else
      if(type == 2)
      {
        printf("Enter side :");
        scanf("%d",&side);
        area = side * side;
      }
      else
      {
        printf("Enter length and width :");
        scanf("%d%d",&length, &width);
        area = length * width;
      }

   // print area
   printf("Area = %d", area);
}
