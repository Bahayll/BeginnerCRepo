#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//kalvyeden elemanlarý alma...
int main()
{
   int notla [SIZE];
   int i;

   for(i=0;i<SIZE;i++)
    scanf("%d\n", &notla[i]);


       for(i=0;i<SIZE;i++)
   printf("index= %d, %d. eleman , %d\n",i, i+1, notla[i]);

   return 0;
}
