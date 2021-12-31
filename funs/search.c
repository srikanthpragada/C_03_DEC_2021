int search(int a[5], int sn)
{
   int i;

     for(i = 0; i < 5; i ++)
     {
         if(a[i] == sn)
            return i;  // found
     }

     return -1; // not found
}

void main()
{
  int arr[] = {10,44,55,44,33};

      printf("%d ", search(arr,44));
      printf("%d ", search(arr,45));



}
