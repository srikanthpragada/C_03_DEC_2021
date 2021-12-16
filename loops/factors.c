// Print factors for the given number

void main()
{
   int n, i, found = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n/2 ; i ++)
      {
         if(n % i == 0)
         {
             printf("%d ",i);
             found = 1;
         }
      }

      if(found == 0)
        printf("Prime Number!");
}
