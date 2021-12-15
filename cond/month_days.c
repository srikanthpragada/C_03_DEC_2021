//  calculating no of days  in a month using if else statement

#include<stdio.h>
void main()
{
 int m,y;

  printf("Enter month number :");
  scanf("%d",&m);

  if(m == 2)
  {
    printf("Enter year :");
    scanf("%d",&y);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        printf("29");
    else
        printf("28");
  }
  else
    if (m == 4 || m == 6 || m == 9 || m == 11)
        printf("30");
    else
        printf("31");
}
