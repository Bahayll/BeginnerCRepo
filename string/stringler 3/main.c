#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>



// dizide kaç büyük harf var onu kontrol ediyoruz...
int main()
{
    char str[5];
    scanf("%s",&str);
    printf("%d",fonk(str));
    return 0;
}

int fonk(char s[5]){
int i=0, c=0;
for(i=0;i<5;i++){
    if(isupper(s[i]))
        c++;
}
return c;
}
