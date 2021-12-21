// Take 4 chars and check whether it is a valid pin

#include <stdio.h>

void main()
{
  char ch;
  int i,count = 0;

    printf("Enter pin :");
    for (i = 1; i <= 4; i++)
    {
        ch = getch();
        putch('*');
        if (isdigit(ch))
            count ++;
    }

    if (count != 4)
        printf("\nSorry! Invalid Pin!!");
    else
        printf("\nValid Pin!!");

}
