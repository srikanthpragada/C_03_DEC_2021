
void factors(int num)
{
  int i;

      for(i=2; i <= num/2; i ++)
        if (num % i == 0)
          printf("%5d",i);
}

void main()
{
     printf("Factors of 245 : ");
     factors(245);
     printf("\nFactors of 3455 : ");
     factors(3455);

}
