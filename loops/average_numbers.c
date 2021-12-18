// Take numbers until 0 and display average

void main()
{
   int n, i, count = 0, total = 0;

       while(1)
       {
           printf("Enter marks [0 to stop]:");
           scanf("%d",&n);

           if(n < 0)
              continue;

           if (n == 0)
               break;

           total += n;
           count ++;
      }

      printf("Total = %d, Average = %d", total, total / count);
}
