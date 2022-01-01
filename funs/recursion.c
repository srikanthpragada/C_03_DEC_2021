// Recursion

void reverse_number(int n)
{
    if(n > 0)
    {
        printf("%d",n % 10);      // Take rightmost digit
        reverse_number(n / 10);   // Remove rightmost digit
    }
}


void reverse(int n)
{
    printf("%d",n);
    if(n > 1)
      reverse(n-1);
}

void main()
{
   //reverse(5);
   reverse_number(2345);
}
