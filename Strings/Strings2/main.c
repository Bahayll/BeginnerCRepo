#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototype
int fonk(char s[5]);

int main()
{
    char str[5]; // Declare a character array to hold up to 4 characters (plus null terminator)
    
    // Input from user
    scanf("%s", str);
    
    // Call function fonk to count uppercase letters
    printf("%d", fonk(str));
    
    return 0;
}

// Function to count uppercase letters in a string of length 5
int fonk(char s[5])
{
    int i, count = 0;
    
    // Loop through each character in the string
    for (i = 0; i < 5; i++)
    {
        // Check if the character is uppercase
        if (isupper(s[i]))
            count++;
    }
    
    return count;
}
