#include <stdio.h>
#include <stdlib.h>



// жNEMLннннннннннннннннннннн
int main()
{
    int a, *aptr, *bptr;
    int b[3]= {10,20,30};
    int i;
    aptr=&a;
    bptr=b; // b dizinin 1 adresi yok her eleman için bir adresi var bu yüzden b[0] adresini turuyot

    printf("\n &a= %p, aptr =%p\n",&a, aptr);
    printf("\n &b= %p, bptr =%p\n",&b, bptr);
    printf("\n b[0]= %d, *bptr =%d\n",b[0], *bptr);

    bptr= &b[1];
    printf("bptr= &b[1]; " );
    printf("\n &b[1]= %p, b[1]= %d,\n",&b[1], b[1]);
    printf("\n bptr= %p, *bptr =%d\n",bptr, *bptr);

    bptr++;
     printf("\n bptr= %p, *bptr =%d\n",bptr, *bptr);
    return 0 ;
}
