// Print the number of digits in a number

void main()
{
   int n, count = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      do
      {
         count ++;
         n /= 10;  // n = n / 10
      }
      while(n > 0);

      printf("%d", count);

}
