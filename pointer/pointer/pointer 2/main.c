#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  a=10, *aptr;
   aptr=&a; // bu koþulu yazmassak aptr nin içinde deðer saklamamýþ oluruz....

printf("%p",aptr);
printf("\n %p ",&aptr);

printf("\n %p",&(*aptr));
printf("\n %p ",*(&aptr));

    return 0;

}
