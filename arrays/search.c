// Take array of 10 elements and fill them with random numbers
// Search for a value

void main()
{
 int i,n, found = 0;
 int a[10];

     srand(time(0));
     for(i = 0; i < 10 ; i ++)
     {
         a[i] = rand() % 100;
         printf("%5d", a[i]);
     }


     printf("\nEnter a number :");
     scanf("%d",&n);

     for(i = 0; i < 10 ; i ++)
     {
         if (a[i] == n)
         {
             printf("Found at %d",i);
             found = 1;
             break;
         }
     }

     if(found == 0)
          printf("Sorry!! Not found!!");
}
