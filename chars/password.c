// Take password and validate it

void main()
{
 int i, upper, digit;
 char ch;

     upper = digit = 0;
     printf("Enter password :");
     for(i = 1; i <= 8 ; i ++)
     {
         ch = getch();
         putch('*');
         if (isupper(ch))
            upper = 1;
         else
           if(isdigit(ch))
               digit = 1;
     }

     if (upper && digit)
         printf("\nValid password!");
     else
         printf("\nInvalid Password!");
}
