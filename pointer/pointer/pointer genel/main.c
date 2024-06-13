#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayilar [5]={2,5,7,95,35};
   int *p=sayilar; // &sayilar[0] ikisi ayný anlam içerir.

   printf("%p\n",p);
   printf("%p\n",p+1);
    printf("%p\n",p+2);
    printf("%p\n",p+3);

    printf("%d\n",*p);  // p[0]
   printf("%d\n",*(p+1));// p[1]
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));

// pointerler diziler yerine kullanýlabilir...


    return 0;
}
