// Count number of uppercase letters

# include <stdio.h>

void main()
{
  char s1[100], s2[100];
  int res;

    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);

    res = strcmp(s1,s2);
    if(res == 0)
          puts("Equal");
    else
      if (res > 0)
          puts("First > Second");
      else
          puts("First < Second");
}
