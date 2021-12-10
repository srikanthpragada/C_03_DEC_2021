// Calculate net price

#include <stdio.h>

void main()
{
   float price, discounted_price, discount, tax, net_price;

      printf("Enter price :");
      scanf("%f",&price);

      discount = price * 0.10;
      discounted_price = price - discount;

      tax = discounted_price * 0.08;
      net_price = discounted_price  + tax;

      printf("Price             %8.2f\n", price);
      printf("- Discount        %8.2f\n", discount);
      printf("                  --------\n");
      printf("After Discount    %8.2f\n", discounted_price);
      printf("+ Tax             %8.2f\n", tax);
      printf("                  --------\n");
      printf("Net Price         %8.2f\n", net_price);
}
