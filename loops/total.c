// Take 5 numbers and print total

void main()
{
   int n, total, i;

      total = 0;
      i = 1;
      while (i <= 5)
      {
          printf("Enter number :");
          scanf("%d",&n);

          total += n;
          i ++;
      }

      printf("Total = %d", total);
}
