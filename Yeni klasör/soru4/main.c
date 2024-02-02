#include <stdio.h>
#include <stdlib.h>

//SORUNUN CEVABI : A-)

int main()
{
    int ar[100] ,fr[100];
    int n,i,j,ctr;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        fr[i]=-1;
    }

    for(i=0;i<n;i++){
        ctr=1;
        for(j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                ctr++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
            fr[i]=ctr;

    }

    for(i=0;i<n;i++)
        printf("%d",ar[i]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d",fr[i]);

    return 0;
}
