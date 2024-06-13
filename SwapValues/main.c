#include <stdio.h>
#include <stdlib.h>



int main() {
   int a,b;
   scanf("%d%d",&a,&b);
   a=degis1(a,b);
   b=degis2(a,b);


   printf("");
   printf("%d\n",a);
    printf("%d",b);
   return 0;
}
int degis1(int a,int b){
a=a+b;
b=a-b;
a=a-b;
return a;
}
int degis2(int a,int b){
a=a+b;
b=a-b;
a=a-b;
return b;
}


