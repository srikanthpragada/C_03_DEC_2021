// Convert INR to USD and EURO

#include <stdio.h>

void main()
{
  float inr, usd, euro;

  printf("Enter money in INR : ");
  scanf("%f",&inr);

  usd = inr / 75.61;
  euro = inr / 85.47;

  printf("%.2f in INR = %.2f in USD and %.2f in Euros ",inr,usd,euro);
}
