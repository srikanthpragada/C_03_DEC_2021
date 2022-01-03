int gcd(int n1, int n2)
{
int i,small;

   small = n1 < n2 ? n1 : n2;

   if(n1 % small == 0  && n2 % small == 0)
       return small;

   for(i = small / 2 ; i >= 1 ; i --)
     if (n1 % i == 0 && n2 % i == 0)
          return i;
}


void main()
{

    printf("%d ", gcd(10,20));
    printf("%d ", gcd(10,15));
    printf("%d ", gcd(11,20));

}
