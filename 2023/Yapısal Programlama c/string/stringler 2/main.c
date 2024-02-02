#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <ctype.h>


int main()
{
   char a='1', b='a';
   if (isdigit(a))
         printf("Char a digit");
   printf("\n%c", toupper(b));
   getch();  //getch fonksiyonu aynen getchar fonksiyonu gibi klavyeden yazýlan tek bir karakteri okur.
   //Klavyeden bir karakter girildiðinde okur ve bellek deðiþkenine atar. Ayrýca enter tuþuna ihtiyacý yoktur.
   return 0;
}
