#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,*aptr;
    aptr=&a;

    printf("%p\n",&a);
    printf("%p\n",&aptr);
    printf("%p\n",aptr);
    printf("%d\n",*(&a));
}
