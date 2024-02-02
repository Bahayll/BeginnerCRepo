#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[3]={10,20,30}, *dptr,i;
    dptr=d;
    for(i=0;i<3;i++)
        printf("\n%d", *dptr+i);
    return 0;
}
