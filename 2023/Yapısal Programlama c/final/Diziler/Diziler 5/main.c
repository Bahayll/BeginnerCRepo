#include <stdio.h>
#include <stdlib.h>

int main()
{
   int d1[7]={89,68,45,37,12,58,21},i,aranan;
   siralafonk(d1);
for(i=0;i<7;i++)
    printf("\n%d.eleman= %d", i+1, d1[i]);
    aranan=arananfonk(d1);
    printf("\naranan eleman indexi= %d", aranan);

    return 0 ;
}
void siralafonk(int a[]){

 int i,j,temp;
    for(j=0;j<7;j++){
        for(i=0;i<6;i++){
            if(a[i]>a[i+1]){

            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;

        }

    }

    }

}
int arananfonk(int b[]){
int low, high, aranan,mid;
low=0;
high=6;
aranan=58;
while(low<=high){
    mid=(low+high)/2;

    if(aranan==b[mid])
        return mid;
    else
        if(aranan<b[mid])
        high= mid-1;

    else
        low= mid+1;


}
}
