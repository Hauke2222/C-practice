#include <stdio.h>

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
int main()
{
    int character, blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((character = getchar()) != EOF)
    {
        if(character == ' ' )
        {
            blanks++;
        } else if (character == '\t')
        {
            tabs++;
        } else if (character == '\n')
        {
            newlines++;
        }      
            
    }
    
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
    
}
