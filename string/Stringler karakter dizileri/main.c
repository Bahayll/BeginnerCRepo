#include <stdio.h>
#include <stdlib.h>


int main()
{
  char isim[5];
  scanf("%4s", &isim); // 4 l�k yer ay�r�dk son eleman \0 olmal�
  printf("%s",isim);
  return 0;
}
