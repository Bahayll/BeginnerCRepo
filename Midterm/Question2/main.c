#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,space,rows,k=0,count=0,count1=0;

   for(i=1;i<=rows-1;++i){

    for(space=1;space<=rows-i;++space){

           printf(" ");
           ++count;

    }
    while(k!= 2*i-1)
    {

        if(count <= rows-1)
        {
            printf("%d",i+k);
            ++count;
        }
        else
        {
            ++count1;
            printf("%d",(i+k-2*count1));
        }
        ++k;
    }
    count1=count=k=0;
    printf("\n");
   }
   return 0;
}
