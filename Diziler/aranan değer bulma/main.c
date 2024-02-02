#include <stdio.h>
int main(){
int a[]={2,3,7,10,15,21,24,70},low, high, mid ;
low=0;
high=7;
int ara = 15 ;


while(low<=high){

    mid = (low+high)/2;

     if (ara == a[mid]){
        return mid;
     }
    else


       if(ara<a[mid]){

         high=mid-1;
       }
else

    low = mid+1;

}
printf("%d", a[ara]);

return 0;
}
