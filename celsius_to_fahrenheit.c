#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 220;
    step = 20;
    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    printf("Celsius to Fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f Celsius is %6.2f Fahrenheit\n", celsius, fahr);
        celsius = celsius + step;
    }
}