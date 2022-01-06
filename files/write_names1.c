#include<stdio.h>

void main()
{
  FILE * fp;

     fp = fopen("names.txt","wt");

     fputs("C\n",fp);
     fputs("Java\n",fp);
     fputs("JavaScript\n",fp);

     fclose(fp);
}
