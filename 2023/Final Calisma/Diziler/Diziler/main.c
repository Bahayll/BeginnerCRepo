#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notlar  [5]= {10,20,30,40,50};
    int i;

    for(i=0;i<5;i++)
      printf("index = %d, %d. eleman, %d\n",i, i+1,notlar[i]);

      printf("\n%d kadar dönern", i);

      return 0;
}
