#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y[6]={2,3,5,7,11,13};
    int *yp= &y[2];
     printf("%d\n",*y);
     printf("%d\n",*yp);
     printf("%d\n",(yp + y[0]));//8 bir ileri gider pointerler 8 byte yer kaplar
     printf("%d\n",yp[4] + 1);

}
