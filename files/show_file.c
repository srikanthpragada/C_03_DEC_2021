// Display the given file on command line with line numbers

#include<stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[200], *p;
  int lineno = 1;

     fp = fopen(argv[1],"rt");
     if (fp == NULL)  // not opened
     {
         printf("Sorry! File <%s> was not found!", argv[1]);
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
