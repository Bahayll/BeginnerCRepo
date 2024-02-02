#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>

int main()
{
    int str;
    char str1= "can", str2="Can",str3= "ali", str4="can";
    //scanf("%s", &str);
    printf("%d",strcmp(str1,str2));
    printf("%d",strcmp(str1,str3));
    printf("%d",strcmp(str1,str4));
    printf("%d",strcmp(str2,str3));
    return 0;
}
