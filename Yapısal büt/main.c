#include <stdio.h>
#include <stdlib.h>

int main()
{
   int not, i=0 , top=0;
   float ort;
   do{
    printf("Not Girin= ");
    scanf("%d",&not);
    if(not==-1)
        break;
    top+=not;
    i++;
   }while(not!=-1);
   ort=top/(float)i;
   printf("\nOrtalama= %.2f", ort);
   return 0;
}
