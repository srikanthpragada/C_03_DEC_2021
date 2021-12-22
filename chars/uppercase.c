// Take 10 chars and display all of them in uppercase
void main()
{
 int i;
 char ch;


     printf("Enter chars :");
     for(i = 1; i <= 10 ; i ++)
     {
         ch = getch();
         putch(toupper(ch));
      }

}
