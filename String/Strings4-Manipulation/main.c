#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char s1[25], s2[25];
    int i = 0, j, uz = 0;

    printf("Enter a string: ");
    scanf("%s", s1); // Read input string into s1

    // Convert s1 characters to opposite case and print
    while (s1[i] != '\0') {
        if (islower(s1[i]))
            s1[i] = toupper(s1[i]); // Convert lowercase to uppercase
        else
            s1[i] = tolower(s1[i]); // Convert uppercase to lowercase

        i++; // Move to the next character
        uz++; // Increment the length counter
    }
    printf("Modified string (case converted): %s\n", s1);

    // Reverse s1 and store in s2
    j = uz - 1; // Initialize j to the last valid index of s1
    for (i = 0; i < uz; i++) {
        s2[i] = s1[j]; // Copy character from end of s1 to beginning of s2
        j--; // Move backwards in s1
    }
    s2[i] = '\0'; // Null-terminate s2

    printf("Reversed string (s1 to s2): %s\n", s2);

    return 0;
}
