// Take array of 10 elements and fill them with random numbers
// Print all even numbers first and then odd numbers

void main()
{
 int i;
 int a[10];

     srand(time(0));
     for(i = 0; i < 10 ; i ++)
     {
         a[i] = rand() % 100;
         printf("%5d", a[i]);
     }

     printf("\n");

     for(i = 0; i < 10 ; i ++)
     {
         if (a[i] % 2 == 0)
             printf("%5d", a[i]);

     }

     for(i = 0; i < 10 ; i ++)
     {
         if (a[i] % 2 == 1)
             printf("%5d", a[i]);

     }
}
