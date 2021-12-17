// Print the given number in reverse order

void main()
{
   int n, total = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      while(n > 0)
      {
         total +=  n % 10;
         n /= 10;  // n = n / 10
      }

      printf("Total of digits = %d", total);
}
