// Take array of 5X5, fill it with random numbers and then search


void main()
{
 int i,j, sn, found = 0;
 int a[5][5];

     srand(time(0));
     for(i = 0; i < 5 ; i ++)
     {
         for (j = 0; j < 5; j ++)
         {
             a[i][j] = rand() % 100;
             printf("%5d", a[i][j]);
         }
         printf("\n");
     }

     printf("\nEnter search number :");
     scanf("%d",&sn);

     for(i = 0; i < 5 ; i ++)
     {
         for (j = 0; j < 5; j ++)
         {
             if (a[i][j] == sn)
             {
                 printf("Found at : %d,%d", i,j);
                 found = 1;
                 break;
             }
         }
         // come out of outer loop if number is found
         if (found)
             break;
     }

     if(!found)
        printf("Sorry! Number not found!!!");

}
