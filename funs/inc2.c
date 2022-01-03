// Pass by Reference/Address

void inc(int * p)
{
    *p = *p + 1;
}

void main()
{
  int a = 100;

      scanf("%d", a);

      inc(&a);  // pass by reference
      printf("%d ",a);

}
