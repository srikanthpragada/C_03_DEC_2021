// Convert inches to cm and mm

#include <stdio.h>

void main()
{
   float inches, cm, mm;

      printf("Enter inches :");
      scanf("%f",&inches);

      cm = inches * 2.54;
      mm = cm * 10;

      printf("%.2f inches = %.2f cm and %.2f mm", inches, cm, mm);
}
