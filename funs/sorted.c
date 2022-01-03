
int sorted(int arr[5])
{
int i;

     for(i = 0; i < 4; i ++)
     {
       if (arr[i] > arr[i + 1])
           return 0; // Not sorted
     }

     return 1;  // sorted
}

void main()
{
    int a [] = {10,20,30,4,50};

    printf("%d ", sorted(a));
}
