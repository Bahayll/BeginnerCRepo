#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y[6]={2,3,5,7,11,13};
    int *yp= &y[2];

    printf("%d\n",*y);
    printf("%d\n",*yp);
    printf("%d\n",yp );
    printf("%d\n",(yp + y[0]));
    printf("%d\n",yp[4] + 1);
}
