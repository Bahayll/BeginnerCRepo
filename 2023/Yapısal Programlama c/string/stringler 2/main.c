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
   getch();  //getch fonksiyonu aynen getchar fonksiyonu gibi klavyeden yaz�lan tek bir karakteri okur.
   //Klavyeden bir karakter girildi�inde okur ve bellek de�i�kenine atar. Ayr�ca enter tu�una ihtiyac� yoktur.
   return 0;
}
