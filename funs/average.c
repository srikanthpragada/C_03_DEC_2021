// Diff between function definition and declaration

#include <stdio.h>

float average(int,int);  // function declaration / Prototype Declaration

void main()
{
 float avg;

    avg = average(10,20);
    printf("%f", avg);

}

float average(int a, int b)  // function definition
{
    return (a + b) / 2.0;
}
