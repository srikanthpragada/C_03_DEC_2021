

int sum(int a[5])
{
   int i,total = 0;

     for(i = 0; i < 5; i ++)
          total += a[i];

     return total;
}

void main()
{
  int total;
  int arr[] = {10,44,55,44,33};

      total =  sum(arr);
      printf("%d", total);
}
