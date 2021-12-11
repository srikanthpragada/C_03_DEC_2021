#include<stdio.h>
void main()
{
 int price, discount, net_price;

   printf("Enter price :");
   scanf("%d",&price);

   if (price > 10000)
       discount  = price * 0.20;
   else
     if (price > 5000)
        discount = price * 0.15;
     else
        discount  = price * 0.10;

   net_price = price - discount;
   printf("Net Price : %d", net_price);

}
