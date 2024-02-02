#include <stdio.h>
#include <stdlib.h>

 int main(){
 int i;
 int d[8]={5,15,2,25,58,22,87,24};
 degis(d);

 for(i=0;i<8;i++){
    printf("%d\t", d[i]);
 }
return 0;
}
 void degis(int *aptr){
   int i,j,tut=0;
   for(i=0;i<8;i++){
    for(j=0;j<7;j++){
        if(aptr[j]>aptr[j+1]){
            tut= aptr[j];
            aptr[j]=aptr[j+1];
            aptr[j+1]=tut;
        }
    }
   }
}


