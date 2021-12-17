// Print factors for the given number

void main()
{
   int n, i, total = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n/2 ; i ++)
      {
         if(n % i == 0)
         {
             total += i;
         }
      }

      printf("Total of factors = %d", total);
}
