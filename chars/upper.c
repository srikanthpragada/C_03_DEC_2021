// Print whether char is uppercase or not

#include <stdio.h>

void main()
{
  char ch;

    printf("Enter a char :");
    ch = getchar();

    if (ch >= 65 && ch <= 90)
         printf("Uppercase!");
    else
         printf("Not an uppercase!");

}
