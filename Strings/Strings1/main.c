#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a = '1', b = 'a';

    // Checking if 'a' is a digit
    if (isdigit(a))
        printf("Char a is a digit\n");

    // Converting 'b' to uppercase and printing
    printf("%c\n", toupper(b));

    // getch function - reads a single character from keyboard
    getch();

    return 0;
}
