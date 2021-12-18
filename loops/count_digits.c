// Print the number of digits in a number

void main()
{
   int n, count = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      while(n > 0)
      {
         count ++;
         n /= 10;  // n = n / 10
      }

      printf("%d", count);

}
