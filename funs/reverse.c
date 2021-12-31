
void print_reverse(int num)
{
    while(num)
    {
        printf("%d",num % 10);
        num/= 10;
    }
}

void reverse(char st[30])
{
  int i;

       for(i = strlen(st) - 1; i >= 0; i --)
          putch(st[i]);
}


void main()
{
   reverse("Abcde");
   printf("\n");
   print_reverse(124);
}
