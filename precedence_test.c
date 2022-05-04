#include <stdio.h>
// Exercsise: Verify that the expression getchar() != EOF is 0 or 1.

int main()
{
    int test;
    test = getchar() != EOF;
    printf("%d", test);
}
