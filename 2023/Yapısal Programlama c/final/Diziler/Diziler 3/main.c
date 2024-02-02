#include <stdio.h>
#include <stdlib.h>

int ZarAt(){

return 1+rand()%6;
}

int main()
{
    int frekans [6]={0};

    fonk(frekans);
    return 0;
}
void fonk (int d[]){
int i ;
for(i=0;i<5;i++){
    switch(ZarAt()){
    case 1: d[0]++ ; break;
    case 2: d[1]++ ; break;
    case 3: d[2]++ ; break;
    case 4: d[3]++ ; break;
    case 5: d[4]++ ; break;
    case 6: d[5]++ ; break;
    }
}
for (i=0;i<6;i++){
    if(d[i]==0)
        continue;

        printf("\n%d sayısından %d kadar gelmiştir",i, d[i]);
}


}
