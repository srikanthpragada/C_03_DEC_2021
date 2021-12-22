// Take array of 10 elements and fill them with random numbers
void main()
{
 int i;
 int a[10];

     srand(time(0));
     for(i = 0; i < 10 ; i ++)
     {
         a[i] = rand() % 100;
         printf("%d ", a[i]);
     }

}
