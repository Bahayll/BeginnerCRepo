#include <stdio.h>
#include <stdlib.h>
//Binary Search yapýlmadan önce dizinin sýralý olmasý gerekmektedir.
int main()
{
 int a[7]={2,6,8,10,20,24,100},aranan;
  aranan=arama(a);
   printf("%d, ", aranan);

}
int arama(int d[7]){
int low,high,ara,mid;
low=0;
high=6;
 ara=8;

   while(low<=high){
          mid=(low+high)/2;

    if(ara==d[mid])
        return mid;

    else
        if(ara<d[mid])
        high=mid-1;

    else
        if(ara>d[mid])
            low=mid-1;

}
return mid;
}
