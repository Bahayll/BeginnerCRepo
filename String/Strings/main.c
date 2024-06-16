#include <stdio.h>
#include <stdlib.h>



#include <string.h> // This header contains ready-made codes and functions for strings.
#include <ctype.h>

/*

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main() {
    char s1[25], s2[25];
    int length = 0, i = 0, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", s1);

    // Convert characters and calculate length
    while (s1[i] != '\0') {
        if (islower(s1[i])) { // If lowercase
            s1[i] = toupper(s1[i]); // Convert to uppercase
            flag = 1; // Mark conversion done
        }
        else if (isupper(s1[i])) { // If uppercase
            s1[i] = tolower(s1[i]); // Convert to lowercase
            flag = 1; // Mark conversion done
        }
        i++; // Move to next character
        length++; // Calculate length
    }

    j = length - 1; // Start reversing from the end
    // Reverse the string and store in s2
    for (i = 0; i < length; i++) {
        s2[i] = s1[j]; // Reverse copying
        j--; // Move to previous character
    }

    s2[i] = '\0'; // Null-terminate the string

    // Print reversed string
    printf("Original string: %s\n", s1);
    printf("Reversed string: %s\n", s2);

    return 0;
}
*/

int main() {
    char s1[25], s2[25];
    int length = 0, i = 0, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", s1);

    // Convert characters and calculate length
    while (s1[i] != '\0') {
        if (islower(s1[i])) { // If lowercase
            s1[i] = toupper(s1[i]); // Convert to uppercase
            flag = 1; // Mark conversion done
        }
        else if (isupper(s1[i])) { // If uppercase
            s1[i] = tolower(s1[i]); // Convert to lowercase
            flag = 1; // Mark conversion done
        }
        i++; // Move to next character
        length++; // Calculate length
    }

    j = length - 1; // Start reversing from the end
    // Reverse the string and store in s2
    for (i = 0; i < length; i++) {
        s2[i] = s1[j]; // Reverse copying
        j--; // Move to previous character
    }

    s2[i] = '\0'; // Null-terminate the string

    // Print reversed string
    printf("Original string: %s\n", s1);
    printf("Reversed string: %s\n", s2);

    return 0;
}
