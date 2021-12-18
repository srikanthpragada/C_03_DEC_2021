// Take marks from user and display total
// We may have at the most 10 marks, but it may be anything less than 10

void main()
{
   int n, i, count = 0, total = 0;


      for(i = 1; i <= 10 ; i ++)
      {
           printf("Enter marks [-1 to stop]:");
           scanf("%d",&n);

           if (n == -1)
               break;

           total += n;
           count ++;
      }

      printf("Total = %d, Average = %d", total, total / count);
}
