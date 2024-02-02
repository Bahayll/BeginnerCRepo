#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s1[25],s2 [25];
   int i =0,j,uz=0;
   scanf("%s", &s1);

   while(s1[i]!= '\0'){
    if(islower(s1[i]))
        s1[i]=toupper(s1[i]);
    else
        s1[i]=tolower(s1[i]);

    i++;
    uz++;
   }
   printf("%s",s1);
   j=uz-1;
for(i=0;i<uz;i++){
    s2[i]=s1[j];
    j--;
}
s2[i]='\0';
printf("\n%s",s2);
}

// s2 ye s1 tersten nasýl kopyalarýz
 //s2[0]=s1[sonuncu]
