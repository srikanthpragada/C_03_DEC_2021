// Count number of uppercase letters

# include <stdio.h>

void main()
{
  char st[100];
  int i, count = 0;

    printf("Enter a string : ");
    gets(st);

    for (i=0; st[i] != '\0'; i ++)
    {
      if (isupper(st[i]))
         count ++;
    }

    printf("No. of Uppercase letters = %d", count);
}
