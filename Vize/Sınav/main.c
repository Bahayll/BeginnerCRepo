#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
scanf("%d%d",&a,&b);
a=degis1(a,b);
b=degis2(b,a);
printf(" ");
printf("%d",a);
printf("%d",a);
return 0;
}

int degisl(int a, int b){
a=a+b;
b=a-b;
a=a - b;
return a;
}
int degis2(int a, int b){
a=a + b;
b=a-b;
a=a-b;
return b;
}
