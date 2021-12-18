// Print largest factor

void main()
{
   int n, i;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = n/2; i > 0; i --)
      {
         if(n % i == 0)  //  found a factor
         {
           printf("Largest factor = %d",i);
           break;
         }
      }

}
