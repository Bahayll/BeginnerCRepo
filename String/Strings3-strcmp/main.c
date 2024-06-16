#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "can", *str2 = "Can", *str3 = "ali", *str4 = "can";

    printf("%d\n", strcmp(str1, str2)); // Compare "can" with "Can"
    printf("%d\n", strcmp(str1, str3)); // Compare "can" with "ali"
    printf("%d\n", strcmp(str1, str4)); // Compare "can" with "can" (same strings)
    printf("%d\n", strcmp(str2, str3)); // Compare "Can" with "ali"
    
    return 0;
}
