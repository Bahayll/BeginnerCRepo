#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
scanf("%d%d",&a,&b);
a=Swap1(a,b);
b=Swap2(b,a);
printf(" ");
printf("%d",a);
printf("%d",a);
return 0;
}

int Swap1(int a, int b){
a=a+b;
b=a-b;
a=a - b;
return a;
}
int Swap2(int a, int b){
a=a + b;
b=a-b;
a=a-b;
return b;
}
