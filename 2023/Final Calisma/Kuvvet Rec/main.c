#include <stdio.h>
#include <stdlib.h>




int Kuvvet(int,int);
int main()
{
   // pow(x,y) hazýr fonksiyonunu biz tasarlayalým

   int s1,s2;

   scanf("%d",&s1); // scanfte & koymayý unutma
   scanf("%d",&s2); // scanfte & koymayý unutma
   printf("Sonuc=%d",Kuvvet(s1,s2));

    return 0;
}

int Kuvvet(int x, int y){
    int s1=x;
    if(y==0)  return 1;
    if(y==1 || x==0) return x;

    else{
        for(int i=0;i<y-1;i++){
            x=s1*x;
        }
    }
return x;





}
