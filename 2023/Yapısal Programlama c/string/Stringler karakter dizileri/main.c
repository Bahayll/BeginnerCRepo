#include <stdio.h>
#include <stdlib.h>


int main()
{
  char isim[5];
  scanf("%4s", &isim); // 4 lük yer ayýrýdk son eleman \0 olmalý
  printf("%s",isim);
  return 0;
}
