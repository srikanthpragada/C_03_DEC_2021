//  calculating no of days  in a month using if else statement

#include<stdio.h>

void main()
{
 int m,y;

  printf("Enter month number :");
  scanf("%d",&m);

  switch(m)
  {
    case 2:
            printf("Enter year :");
            scanf("%d",&y);
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
                printf("29");
            else
                printf("28");

            break;
    case 4:
    case 6:
    case 9:
    case 11: printf("30");
             break;
    default: printf("31");
  } // switch

} // main()
