#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  a=10, *aptr;
   aptr=&a; // bu ko�ulu yazmassak aptr nin i�inde de�er saklamam�� oluruz....

printf("%p",aptr);
printf("\n %p ",&aptr);

printf("\n %p",&(*aptr));
printf("\n %p ",*(&aptr));

    return 0;

}
