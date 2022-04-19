#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    printf("Fahrenheit to Celsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f Fahrenheit is %6.2f Celsius\n", fahr, celsius);
        fahr = fahr + step;
    }
}
