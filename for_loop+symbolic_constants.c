#include <stdio.h>
/* print Fahrenheit-Celsius table */

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

int main()
{
    int fahr;
    for (fahr = UPPER; LOWER <= fahr; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}