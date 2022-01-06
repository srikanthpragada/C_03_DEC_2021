// Print the given file with line numbers

#include<stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[200], *p;
  int lineno = 1;

     printf("Enter filename :");
     gets(filename);

     fp = fopen(filename,"rt");
     if (fp == NULL)  // not opened
     {
         printf("Sorry! File <%s> was not found!", filename);
         exit(1);
     }


     while(1)
     {
         p = fgets(line,200,fp);
         if (p == NULL)  // EOF
            break;
         printf("%3d : %s",lineno, line);
         lineno ++;
     }

     fclose(fp);
}
