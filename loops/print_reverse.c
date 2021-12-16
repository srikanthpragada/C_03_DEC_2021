// Print the given number in reverse order

void main()
{
   int n;

      printf("Enter a number :");
      scanf("%d",&n);

      while(n > 0)
      {
         printf("%d", n % 10);
         n /= 10;  // n = n / 10
      }

}
