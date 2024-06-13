#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15, b = 92;
    int *p;
    printf("\n a= %d, b= %d\n",a, b);
    printf("\n &a= %p, &b= %p, &p= %p\n",&a, &b, &p);

     p = larger(&a, &b);
    printf("\n &p= %p, *p= %d\n",& p, *p);
     printf("\n%d is a larger \n",*p);

}

int larger(int *x, int *y){
 printf("\n &x= %p, &y= %p \n",&x, &y);
 printf("\n x= %p, y= %p \n",x, y);
 printf("\n *x= %d, *y= %d \n",*x, *y);
 if(*x > *y)
    return x;
 else
    return y;

}
