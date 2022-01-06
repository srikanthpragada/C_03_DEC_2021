//Encrypt file

#include<stdio.h>

void main()
{
  FILE * sfp, * tfp;
  char filename[50], target[50];
  int ch;;

     printf("Enter source filename :");
     gets(filename);

     printf("Enter target filename :");
     gets(target);

     sfp = fopen(filename,"rt");
     if (sfp == NULL)  // not opened
     {
         printf("Sorry! File <%s> was not found!", filename);
         exit(1);
     }

     tfp = fopen(target,"wb");
     if (tfp == NULL)  // not opened
     {
         printf("Sorry! File <%s> was not found!", target);
         exit(1);
     }

     while(1)
     {
         ch = fgetc(sfp);
         if (ch == EOF)
              break;

         fputc(ch + 1, tfp);
     }

     fclose(sfp);
     fclose(tfp);
}
